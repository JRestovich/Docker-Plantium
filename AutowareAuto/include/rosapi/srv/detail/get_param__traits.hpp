// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi:srv/GetParam.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__GET_PARAM__TRAITS_HPP_
#define ROSAPI__SRV__DETAIL__GET_PARAM__TRAITS_HPP_

#include "rosapi/srv/detail/get_param__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::GetParam_Request>()
{
  return "rosapi::srv::GetParam_Request";
}

template<>
inline const char * name<rosapi::srv::GetParam_Request>()
{
  return "rosapi/srv/GetParam_Request";
}

template<>
struct has_fixed_size<rosapi::srv::GetParam_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::GetParam_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::GetParam_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::GetParam_Response>()
{
  return "rosapi::srv::GetParam_Response";
}

template<>
inline const char * name<rosapi::srv::GetParam_Response>()
{
  return "rosapi/srv/GetParam_Response";
}

template<>
struct has_fixed_size<rosapi::srv::GetParam_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::GetParam_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::GetParam_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::GetParam>()
{
  return "rosapi::srv::GetParam";
}

template<>
inline const char * name<rosapi::srv::GetParam>()
{
  return "rosapi/srv/GetParam";
}

template<>
struct has_fixed_size<rosapi::srv::GetParam>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi::srv::GetParam_Request>::value &&
    has_fixed_size<rosapi::srv::GetParam_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi::srv::GetParam>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi::srv::GetParam_Request>::value &&
    has_bounded_size<rosapi::srv::GetParam_Response>::value
  >
{
};

template<>
struct is_service<rosapi::srv::GetParam>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi::srv::GetParam_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi::srv::GetParam_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI__SRV__DETAIL__GET_PARAM__TRAITS_HPP_
