/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/params/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);



void ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_mapList(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "mapList";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->initialize(func.returnType);
  ::apache::thrift::metadata::ThriftField module_NestedContainers_mapList_foo_1;
  module_NestedContainers_mapList_foo_1.id = 1;
  module_NestedContainers_mapList_foo_1.name = "foo";
  module_NestedContainers_mapList_foo_1.is_optional = false;
  auto module_NestedContainers_mapList_foo_1_type = std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)));
  module_NestedContainers_mapList_foo_1_type->initialize(module_NestedContainers_mapList_foo_1.type);
  func.arguments.push_back(std::move(module_NestedContainers_mapList_foo_1));
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_mapSet(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "mapSet";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->initialize(func.returnType);
  ::apache::thrift::metadata::ThriftField module_NestedContainers_mapSet_foo_1;
  module_NestedContainers_mapSet_foo_1.id = 1;
  module_NestedContainers_mapSet_foo_1.name = "foo";
  module_NestedContainers_mapSet_foo_1.is_optional = false;
  auto module_NestedContainers_mapSet_foo_1_type = std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)));
  module_NestedContainers_mapSet_foo_1_type->initialize(module_NestedContainers_mapSet_foo_1.type);
  func.arguments.push_back(std::move(module_NestedContainers_mapSet_foo_1));
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_listMap(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "listMap";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->initialize(func.returnType);
  ::apache::thrift::metadata::ThriftField module_NestedContainers_listMap_foo_1;
  module_NestedContainers_listMap_foo_1.id = 1;
  module_NestedContainers_listMap_foo_1.name = "foo";
  module_NestedContainers_listMap_foo_1.is_optional = false;
  auto module_NestedContainers_listMap_foo_1_type = std::make_unique<List>(std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)));
  module_NestedContainers_listMap_foo_1_type->initialize(module_NestedContainers_listMap_foo_1.type);
  func.arguments.push_back(std::move(module_NestedContainers_listMap_foo_1));
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_listSet(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "listSet";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->initialize(func.returnType);
  ::apache::thrift::metadata::ThriftField module_NestedContainers_listSet_foo_1;
  module_NestedContainers_listSet_foo_1.id = 1;
  module_NestedContainers_listSet_foo_1.name = "foo";
  module_NestedContainers_listSet_foo_1.is_optional = false;
  auto module_NestedContainers_listSet_foo_1_type = std::make_unique<List>(std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)));
  module_NestedContainers_listSet_foo_1_type->initialize(module_NestedContainers_listSet_foo_1.type);
  func.arguments.push_back(std::move(module_NestedContainers_listSet_foo_1));
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_turtles(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "turtles";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_VOID_TYPE);
  func_ret_type->initialize(func.returnType);
  ::apache::thrift::metadata::ThriftField module_NestedContainers_turtles_foo_1;
  module_NestedContainers_turtles_foo_1.id = 1;
  module_NestedContainers_turtles_foo_1.name = "foo";
  module_NestedContainers_turtles_foo_1.is_optional = false;
  auto module_NestedContainers_turtles_foo_1_type = std::make_unique<List>(std::make_unique<List>(std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE))))));
  module_NestedContainers_turtles_foo_1_type->initialize(module_NestedContainers_turtles_foo_1.type);
  func.arguments.push_back(std::move(module_NestedContainers_turtles_foo_1));
  service.functions.push_back(std::move(func));
}

void ServiceMetadata<::cpp2::NestedContainersSvIf>::gen(ThriftMetadata& metadata, ThriftServiceContext& context) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_NestedContainers;
  module_NestedContainers.name = "module.NestedContainers";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_mapList,
    ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_mapSet,
    ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_listMap,
    ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_listSet,
    ServiceMetadata<::cpp2::NestedContainersSvIf>::gen_turtles,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_NestedContainers);
  }
  context.set_service_info(std::move(module_NestedContainers));
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.set_name("module");
  context.set_module(std::move(module));
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
