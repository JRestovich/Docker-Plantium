// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi:msg/TypeDef.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__MSG__DETAIL__TYPE_DEF__TRAITS_HPP_
#define ROSAPI__MSG__DETAIL__TYPE_DEF__TRAITS_HPP_

#include "rosapi/msg/detail/type_def__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::msg::TypeDef>()
{
  return "rosapi::msg::TypeDef";
}

template<>
inline const char * name<rosapi::msg::TypeDef>()
{
  return "rosapi/msg/TypeDef";
}

template<>
struct has_fixed_size<rosapi::msg::TypeDef>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::msg::TypeDef>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::msg::TypeDef>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI__MSG__DETAIL__TYPE_DEF__TRAITS_HPP_
