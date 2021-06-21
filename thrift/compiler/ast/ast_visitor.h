/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <exception>
#include <functional>
#include <type_traits>
#include <vector>

#include <thrift/compiler/ast/t_const.h>
#include <thrift/compiler/ast/t_enum.h>
#include <thrift/compiler/ast/t_enum_value.h>
#include <thrift/compiler/ast/t_exception.h>
#include <thrift/compiler/ast/t_field.h>
#include <thrift/compiler/ast/t_function.h>
#include <thrift/compiler/ast/t_interaction.h>
#include <thrift/compiler/ast/t_interface.h>
#include <thrift/compiler/ast/t_list.h>
#include <thrift/compiler/ast/t_map.h>
#include <thrift/compiler/ast/t_node.h>
#include <thrift/compiler/ast/t_program.h>
#include <thrift/compiler/ast/t_service.h>
#include <thrift/compiler/ast/t_set.h>
#include <thrift/compiler/ast/t_sink.h>
#include <thrift/compiler/ast/t_stream.h>
#include <thrift/compiler/ast/t_struct.h>
#include <thrift/compiler/ast/t_typedef.h>
#include <thrift/compiler/ast/t_union.h>

namespace apache {
namespace thrift {
namespace compiler {

// A list of visitor that accept the given arguments.
template <typename... Args>
using visitor_list = std::vector<std::function<void(Args...)>>;

template <bool is_const, typename... Args>
class basic_ast_visitor;

// A class that can traverse ast nodes, invoking registered visitors for each
// node visited.
//
// Visits AST nodes in 'preorder', visiting the parent node before children
// nodes.
//
// For each concrete node type, provides the following functions:
// - an operator() overload for visiting the node:
//     void operator()(args..., t_{name}&) const;
// - a function to add a node-specific visitor:
//     void add_{name}_visitor(std::function<void(args..., t_{name}&)>);
//
// Also provides helper functions for registering a visitor for multiple node
// types. For example: all interface, structured_declaration, and
// declaration visitors.
using ast_visitor = basic_ast_visitor<false>;

// Same as ast_visitor, except traverse a const AST.
using const_ast_visitor = basic_ast_visitor<true>;

// A class that can traverse an AST, calling registered visitors.
// See ast_visitor.
template <bool is_const, typename... Args>
class basic_ast_visitor {
  // The type to use when traversing the given node type N.
  template <typename N>
  using node_type = std::conditional_t<is_const, const N, N>;

 public:
  // Adds visitor for all interface node types.
  //
  // For example: t_service and t_interaction.
  template <typename V>
  void add_interface_visitor(V&& visitor) {
    add_service_visitor(visitor);
    add_interaction_visitor(std::forward<V>(visitor));
  }

  // Adds a visitor for all structured IDL definition node types.
  //
  // For example: t_struct, t_union, and t_exception.
  // Does not include other t_structured nodes like t_paramlist.
  template <typename V>
  void add_structured_definition_visitor(V&& visitor) {
    add_struct_visitor(visitor);
    add_union_visitor(visitor);
    add_exception_visitor(std::forward<V>(visitor));
  }

  // Adds a visitor for all IDL definition node types.
  template <typename V>
  void add_definition_visitor(V&& visitor) {
    add_interface_visitor(visitor);
    add_function_visitor(visitor);

    add_structured_definition_visitor(visitor);
    add_field_visitor(visitor);

    add_enum_visitor(visitor);
    add_enum_value_visitor(visitor);
    add_const_visitor(visitor);

    add_typedef_visitor(std::forward<V>(visitor));
  }

  template <typename V>
  void add_container_visitor(V&& visitor) {
    add_set_visitor(visitor);
    add_list_visitor(visitor);
    add_map_visitor(std::forward<V>(visitor));
  }

  template <typename V>
  void add_type_instantiation_visitor(V&& visitor) {
    add_container_visitor(visitor);
    add_sink_visitor(visitor);
    add_stream_response_visitor(std::forward<V>(visitor));
  }

// Visitation and registration functions for concrete AST nodes.
#define FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(name)           \
 private:                                                   \
  using name##_type = node_type<t_##name>;                  \
  visitor_list<Args..., name##_type&> name##_visitors_;     \
                                                            \
 public:                                                    \
  void add_##name##_visitor(                                \
      std::function<void(Args..., name##_type&)> visitor) { \
    name##_visitors_.emplace_back(std::move(visitor));      \
  }                                                         \
  void operator()(Args... args, name##_type& node) const

  FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(program) {
    visit(program_visitors_, node, args...);
    visit_children_ptrs(node.services(), args...);
    visit_children_ptrs(node.interactions(), args...);
    // TODO(afuller): Split structs and unions in t_program accessors.
    for (auto* struct_or_union : node.structs()) {
      if (auto* tunion = as<t_union>(*struct_or_union)) {
        this->operator()(args..., *tunion);
      } else {
        this->operator()(args..., *struct_or_union);
      }
    }
    visit_children_ptrs(node.exceptions(), args...);
    visit_children_ptrs(node.typedefs(), args...);
    visit_children_ptrs(node.enums(), args...);
    visit_children_ptrs(node.consts(), args...);
    for (auto& type_inst : node.type_instantiations()) {
      if (auto* set_node = as<t_set>(type_inst)) {
        visit_child(*set_node, args...);
      } else if (auto* list_node = as<t_list>(type_inst)) {
        visit_child(*list_node, args...);
      } else if (auto* map_node = as<t_map>(type_inst)) {
        visit_child(*map_node, args...);
      } else if (auto* sink_node = as<t_sink>(type_inst)) {
        visit_child(*sink_node, args...);
      } else if (auto* stream_node = as<t_stream_response>(type_inst)) {
        visit_child(*stream_node, args...);
      } else {
        std::terminate(); // Should be unreachable.
      }
    }
  }

  // Interfaces
  FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(service) {
    assert(typeid(node) == typeid(service_type)); // Must actually be a service.
    visit(service_visitors_, node, args...);
    visit_children(node.functions(), args...);
  }
  FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(interaction) {
    visit(interaction_visitors_, node, args...);
    visit_children(node.functions(), args...);
  }
  FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(function) {
    visit(function_visitors_, node, args...);
    if (node.exceptions() != nullptr) {
      visit_child(*node.exceptions(), args...);
    }
  }
  FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(throws) {
    visit(throws_visitors_, node, args...);
  }

  // Types
  FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(struct) {
    assert(typeid(node) == typeid(struct_type)); // Must actually be a struct.
    visit(struct_visitors_, node, args...);
    visit_children(node.fields(), args...);
  }
  FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(union) {
    visit(union_visitors_, node, args...);
    visit_children(node.fields(), args...);
  }
  FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(exception) {
    visit(exception_visitors_, node, args...);
    visit_children(node.fields(), args...);
  }
  FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(field) {
    visit(field_visitors_, node, args...);
  }
  FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(enum) {
    visit(enum_visitors_, node, args...);
    visit_children(node.values(), args...);
  }
  FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(enum_value) {
    visit(enum_value_visitors_, node, args...);
  }
  FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(const) {
    visit(const_visitors_, node, args...);
  }
  FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(typedef) {
    visit(typedef_visitors_, node, args...);
  }

  // Templated type instantiations.
  FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(set) {
    visit(set_visitors_, node, args...);
  }
  FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(list) {
    visit(list_visitors_, node, args...);
  }
  FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(map) {
    visit(map_visitors_, node, args...);
  }
  FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(sink) {
    visit(sink_visitors_, node, args...);
    if (node.sink_exceptions() != nullptr) {
      visit_child(*node.sink_exceptions(), args...);
    }
    if (node.final_response_exceptions() != nullptr) {
      visit_child(*node.final_response_exceptions(), args...);
    }
  }
  FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_(stream_response) {
    visit(stream_response_visitors_, node, args...);
    if (node.exceptions() != nullptr) {
      visit_child(*node.exceptions(), args...);
    }
  }

#undef FBTHRIFT_DETAIL_AST_VISITOR_NODE_T_

 private:
  template <typename N>
  static void visit(
      const visitor_list<Args..., N&>& visitors, N& node, Args... args) {
    for (auto&& visitor : visitors) {
      visitor(args..., node);
    }
  }
  template <typename C>
  void visit_child(C& child, Args... args) const {
    operator()(args..., child);
  }

  template <typename C>
  void visit_children(const C& children, Args... args) const {
    for (auto&& child : children) {
      operator()(args..., child);
    }
  }
  template <typename C>
  void visit_children_ptrs(const C& children, Args... args) const {
    for (auto* child : children) {
      operator()(args..., *child);
    }
  }
  // Helper that to propagate constness throw a dynamic_cast.
  template <typename T>
  static node_type<T>* as(node_type<t_node>& node) {
    return dynamic_cast<node_type<T>*>(&node);
  }
};

} // namespace compiler
} // namespace thrift
} // namespace apache
