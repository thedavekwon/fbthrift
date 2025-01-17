/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/nimble/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace ident {
struct first;
struct second;
struct third;
struct isTrue;
} // namespace ident
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_first
#define APACHE_THRIFT_ACCESSOR_first
APACHE_THRIFT_DEFINE_ACCESSOR(first);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_second
#define APACHE_THRIFT_ACCESSOR_second
APACHE_THRIFT_DEFINE_ACCESSOR(second);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_third
#define APACHE_THRIFT_ACCESSOR_third
APACHE_THRIFT_DEFINE_ACCESSOR(third);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_isTrue
#define APACHE_THRIFT_ACCESSOR_isTrue
APACHE_THRIFT_DEFINE_ACCESSOR(isTrue);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class BasicTypes;
} // cpp2
// END forward_declare
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


class BasicTypes final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static const folly::StringPiece __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static constexpr std::size_t __fbthrift_field_size_v = 4;

  template<class T>
  using __fbthrift_id = folly::type_pack_element_t<folly::to_underlying(T::value),
                                                   void,
                                                   ::apache::thrift::field_id<1>,
                                                   ::apache::thrift::field_id<2>,
                                                   ::apache::thrift::field_id<3>,
                                                   ::apache::thrift::field_id<4>>;

  template<class T>
  using __fbthrift_type_tag = folly::type_pack_element_t<folly::to_underlying(T::value),
                                                         void,
                                                         ::apache::thrift::type::i32_t,
                                                         ::apache::thrift::type::i32_t,
                                                         ::apache::thrift::type::i64_t,
                                                         ::apache::thrift::type::bool_t>;

  template<class T>
  using __fbthrift_ident = folly::type_pack_element_t<folly::to_underlying(T::value),
                                                      void,
                                                      ::apache::thrift::ident::first,
                                                      ::apache::thrift::ident::second,
                                                      ::apache::thrift::ident::third,
                                                      ::apache::thrift::ident::isTrue>;

  struct __fbthrift_ordinal_impl {
#if (defined(_MSC_VER) && _MSC_VER >= 1920) || defined(__clang__)
    template<class> static constexpr int value = 0;
    template<> static constexpr int value<::apache::thrift::field_id<1>> = 1;
    template<> static constexpr int value<::apache::thrift::ident::first> = 1;
    template<> static constexpr int value<::apache::thrift::field_id<2>> = 2;
    template<> static constexpr int value<::apache::thrift::ident::second> = 2;
    template<> static constexpr int value<::apache::thrift::field_id<3>> = 3;
    template<> static constexpr int value<::apache::thrift::ident::third> = 3;
    template<> static constexpr int value<::apache::thrift::field_id<4>> = 4;
    template<> static constexpr int value<::apache::thrift::ident::isTrue> = 4;
#else
    template<class T> static constexpr int value_impl(folly::tag_t<T>) { return 0; }
    static constexpr int value_impl(folly::tag_t<::apache::thrift::field_id<1>>) { return 1; }
    static constexpr int value_impl(folly::tag_t<::apache::thrift::ident::first>) { return 1; }
    static constexpr int value_impl(folly::tag_t<::apache::thrift::field_id<2>>) { return 2; }
    static constexpr int value_impl(folly::tag_t<::apache::thrift::ident::second>) { return 2; }
    static constexpr int value_impl(folly::tag_t<::apache::thrift::field_id<3>>) { return 3; }
    static constexpr int value_impl(folly::tag_t<::apache::thrift::ident::third>) { return 3; }
    static constexpr int value_impl(folly::tag_t<::apache::thrift::field_id<4>>) { return 4; }
    static constexpr int value_impl(folly::tag_t<::apache::thrift::ident::isTrue>) { return 4; }
    template<class T> static constexpr int value = value_impl(folly::tag_t<T>{});
#endif
  };

  struct __fbthrift_ordinal_impl_for_non_unique_type {
    template<class, class, class> struct Impl { static constexpr int value = 0; };
    template<class T> struct Impl<::apache::thrift::type::i32_t, T, std::enable_if_t<sizeof(T) != -1>> { static constexpr int value = 1; };
    template<class T> struct Impl<::apache::thrift::type::i32_t, T, std::enable_if_t<sizeof(T) != -2>> { static constexpr int value = 2; };
    template<class T> struct Impl<::apache::thrift::type::i64_t, T, std::enable_if_t<sizeof(T) != -3>> { static constexpr int value = 3; };
    template<class T> struct Impl<::apache::thrift::type::bool_t, T, std::enable_if_t<sizeof(T) != -4>> { static constexpr int value = 4; };

    template<class T> static constexpr int value = Impl<T, T, void>::value;
  };

  template<class T> using __fbthrift_ordinal = ::apache::thrift::field_ordinal<
    std::conditional_t<
        __fbthrift_ordinal_impl::value<T> != 0,
        __fbthrift_ordinal_impl,
        __fbthrift_ordinal_impl_for_non_unique_type>::template value<T>
  >;
  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = BasicTypes;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  BasicTypes() :
      __fbthrift_field_first(),
      __fbthrift_field_second(),
      __fbthrift_field_third(),
      __fbthrift_field_isTrue() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  BasicTypes(apache::thrift::FragileConstructor, ::std::int32_t first__arg, ::std::int32_t second__arg, ::std::int64_t third__arg, bool isTrue__arg);

  BasicTypes(BasicTypes&&) = default;

  BasicTypes(const BasicTypes&) = default;


  BasicTypes& operator=(BasicTypes&&) = default;

  BasicTypes& operator=(const BasicTypes&) = default;
 private:
  ::std::int32_t __fbthrift_field_first;
 private:
  ::std::int32_t __fbthrift_field_second;
 private:
  ::std::int64_t __fbthrift_field_third;
 private:
  bool __fbthrift_field_isTrue;
 private:
  apache::thrift::detail::isset_bitset<3, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const BasicTypes&) const;
  bool operator<(const BasicTypes&) const;

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::required_field_ref<const T&> first_ref() const& {
    return ::apache::thrift::required_field_ref<const T&>{this->__fbthrift_field_first};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::required_field_ref<const T&&> first_ref() const&& {
    return ::apache::thrift::required_field_ref<const T&&>{static_cast<const T&&>(this->__fbthrift_field_first)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::required_field_ref<T&> first_ref() & {
    return ::apache::thrift::required_field_ref<T&>{this->__fbthrift_field_first};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::required_field_ref<T&&> first_ref() && {
    return ::apache::thrift::required_field_ref<T&&>{static_cast<T&&>(this->__fbthrift_field_first)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::required_field_ref<const T&> first() const& {
    return ::apache::thrift::required_field_ref<const T&>{this->__fbthrift_field_first};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::required_field_ref<const T&&> first() const&& {
    return ::apache::thrift::required_field_ref<const T&&>{static_cast<const T&&>(this->__fbthrift_field_first)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::required_field_ref<T&> first() & {
    return ::apache::thrift::required_field_ref<T&>{this->__fbthrift_field_first};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::required_field_ref<T&&> first() && {
    return ::apache::thrift::required_field_ref<T&&>{static_cast<T&&>(this->__fbthrift_field_first)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> second_ref() const& {
    return {this->__fbthrift_field_second, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> second_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_second), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> second_ref() & {
    return {this->__fbthrift_field_second, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> second_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_second), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> second() const& {
    return {this->__fbthrift_field_second, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> second() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_second), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> second() & {
    return {this->__fbthrift_field_second, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> second() && {
    return {static_cast<T&&>(this->__fbthrift_field_second), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> third_ref() const& {
    return {this->__fbthrift_field_third, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> third_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_third), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> third_ref() & {
    return {this->__fbthrift_field_third, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> third_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_third), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> third() const& {
    return {this->__fbthrift_field_third, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> third() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_third), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> third() & {
    return {this->__fbthrift_field_third, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> third() && {
    return {static_cast<T&&>(this->__fbthrift_field_third), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> isTrue_ref() const& {
    return {this->__fbthrift_field_isTrue, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> isTrue_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_isTrue), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> isTrue_ref() & {
    return {this->__fbthrift_field_isTrue, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> isTrue_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_isTrue), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> isTrue() const& {
    return {this->__fbthrift_field_isTrue, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> isTrue() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_isTrue), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> isTrue() & {
    return {this->__fbthrift_field_isTrue, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> isTrue() && {
    return {static_cast<T&&>(this->__fbthrift_field_isTrue), __isset.at(2), __isset.bit(2)};
  }

  ::std::int32_t get_first() const {
    return __fbthrift_field_first;
  }

  [[deprecated("Use `FOO.first_ref() = BAR;` instead of `FOO.set_first(BAR);`")]]
  ::std::int32_t& set_first(::std::int32_t first_) {
    first_ref() = first_;
    return __fbthrift_field_first;
  }

  const ::std::int32_t* get_second() const& {
    return second_ref() ? std::addressof(__fbthrift_field_second) : nullptr;
  }

  ::std::int32_t* get_second() & {
    return second_ref() ? std::addressof(__fbthrift_field_second) : nullptr;
  }
  ::std::int32_t* get_second() && = delete;

  [[deprecated("Use `FOO.second_ref() = BAR;` instead of `FOO.set_second(BAR);`")]]
  ::std::int32_t& set_second(::std::int32_t second_) {
    second_ref() = second_;
    return __fbthrift_field_second;
  }

  const ::std::int64_t* get_third() const& {
    return third_ref() ? std::addressof(__fbthrift_field_third) : nullptr;
  }

  ::std::int64_t* get_third() & {
    return third_ref() ? std::addressof(__fbthrift_field_third) : nullptr;
  }
  ::std::int64_t* get_third() && = delete;

  [[deprecated("Use `FOO.third_ref() = BAR;` instead of `FOO.set_third(BAR);`")]]
  ::std::int64_t& set_third(::std::int64_t third_) {
    third_ref() = third_;
    return __fbthrift_field_third;
  }

  bool get_isTrue() const {
    return __fbthrift_field_isTrue;
  }

  [[deprecated("Use `FOO.isTrue_ref() = BAR;` instead of `FOO.set_isTrue(BAR);`")]]
  bool& set_isTrue(bool isTrue_) {
    isTrue_ref() = isTrue_;
    return __fbthrift_field_isTrue;
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<BasicTypes>;
  friend void swap(BasicTypes& a, BasicTypes& b);
};

template <class Protocol_>
unsigned long BasicTypes::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


} // cpp2
