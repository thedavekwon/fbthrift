/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/serialization_field_order/gen-cpp2/module_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::cpp2::Foo> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::cpp2::Foo2> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

template <class Protocol_>
void Foo::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_field2:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_field2, _readState);
    
  }
 this->__isset.set(1, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_field3:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_field3, _readState);
    
  }
 this->__isset.set(2, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_field1:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_field1, _readState);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Foo>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_field2;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_field3;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_field1;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Foo::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Foo");
  {
    xfer += prot_->serializedFieldSize("field2", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_field2);
  }
  {
    xfer += prot_->serializedFieldSize("field3", apache::thrift::protocol::T_I32, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_field3);
  }
  {
    xfer += prot_->serializedFieldSize("field1", apache::thrift::protocol::T_I32, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_field1);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Foo::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Foo");
  {
    xfer += prot_->serializedFieldSize("field2", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_field2);
  }
  {
    xfer += prot_->serializedFieldSize("field3", apache::thrift::protocol::T_I32, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_field3);
  }
  {
    xfer += prot_->serializedFieldSize("field1", apache::thrift::protocol::T_I32, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_field1);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Foo::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Foo");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 1, kPrevFieldId>(*prot_, "field2", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_field2);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 2, kPrevFieldId>(*prot_, "field3", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_field3);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 2;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 3, kPrevFieldId>(*prot_, "field1", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_field1);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Foo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Foo::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Foo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Foo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Foo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Foo::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Foo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Foo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


template <class Protocol_>
void Foo2::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          3,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_field1:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_field1, _readState);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_field2:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_field2, _readState);
    
  }
 this->__isset.set(1, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_field3:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_field3, _readState);
    
  }
 this->__isset.set(2, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<Foo2>>();
  }

  switch (_readState.fieldId) {
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_field1;
      } else {
        goto _skip;
      }
    }
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_field2;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_field3;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t Foo2::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Foo2");
  {
    xfer += prot_->serializedFieldSize("field1", apache::thrift::protocol::T_I32, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_field1);
  }
  {
    xfer += prot_->serializedFieldSize("field2", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_field2);
  }
  {
    xfer += prot_->serializedFieldSize("field3", apache::thrift::protocol::T_I32, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_field3);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Foo2::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Foo2");
  {
    xfer += prot_->serializedFieldSize("field1", apache::thrift::protocol::T_I32, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_field1);
  }
  {
    xfer += prot_->serializedFieldSize("field2", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_field2);
  }
  {
    xfer += prot_->serializedFieldSize("field3", apache::thrift::protocol::T_I32, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_field3);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Foo2::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Foo2");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 3, kPrevFieldId>(*prot_, "field1", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_field1);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 3;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 1, kPrevFieldId>(*prot_, "field2", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_field2);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 2, kPrevFieldId>(*prot_, "field3", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_field3);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void Foo2::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Foo2::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Foo2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Foo2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void Foo2::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Foo2::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Foo2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Foo2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2
