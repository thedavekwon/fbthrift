/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/reflection_metadata.h"

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


void StructMetadata<::cpp2::ReflectionStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("reflection.ReflectionStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& reflection_ReflectionStruct = res.first->second;
  reflection_ReflectionStruct.name = "reflection.ReflectionStruct";
  reflection_ReflectionStruct.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  reflection_ReflectionStruct_fields[] = {
    {1, "fieldA", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)},
  };
  for (const auto& f : reflection_ReflectionStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->initialize(field.type);
    reflection_ReflectionStruct.fields.push_back(std::move(field));
  }
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
