// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi:srv/Publishers.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__PUBLISHERS__TRAITS_HPP_
#define ROSAPI__SRV__DETAIL__PUBLISHERS__TRAITS_HPP_

#include "rosapi/srv/detail/publishers__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::Publishers_Request>()
{
  return "rosapi::srv::Publishers_Request";
}

template<>
inline const char * name<rosapi::srv::Publishers_Request>()
{
  return "rosapi/srv/Publishers_Request";
}

template<>
struct has_fixed_size<rosapi::srv::Publishers_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::Publishers_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::Publishers_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::Publishers_Response>()
{
  return "rosapi::srv::Publishers_Response";
}

template<>
inline const char * name<rosapi::srv::Publishers_Response>()
{
  return "rosapi/srv/Publishers_Response";
}

template<>
struct has_fixed_size<rosapi::srv::Publishers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::Publishers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::Publishers_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::Publishers>()
{
  return "rosapi::srv::Publishers";
}

template<>
inline const char * name<rosapi::srv::Publishers>()
{
  return "rosapi/srv/Publishers";
}

template<>
struct has_fixed_size<rosapi::srv::Publishers>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi::srv::Publishers_Request>::value &&
    has_fixed_size<rosapi::srv::Publishers_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi::srv::Publishers>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi::srv::Publishers_Request>::value &&
    has_bounded_size<rosapi::srv::Publishers_Response>::value
  >
{
};

template<>
struct is_service<rosapi::srv::Publishers>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi::srv::Publishers_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi::srv::Publishers_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI__SRV__DETAIL__PUBLISHERS__TRAITS_HPP_
