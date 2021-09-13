// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi:srv/SetParam.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SET_PARAM__TRAITS_HPP_
#define ROSAPI__SRV__DETAIL__SET_PARAM__TRAITS_HPP_

#include "rosapi/srv/detail/set_param__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::SetParam_Request>()
{
  return "rosapi::srv::SetParam_Request";
}

template<>
inline const char * name<rosapi::srv::SetParam_Request>()
{
  return "rosapi/srv/SetParam_Request";
}

template<>
struct has_fixed_size<rosapi::srv::SetParam_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::SetParam_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::SetParam_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::SetParam_Response>()
{
  return "rosapi::srv::SetParam_Response";
}

template<>
inline const char * name<rosapi::srv::SetParam_Response>()
{
  return "rosapi/srv/SetParam_Response";
}

template<>
struct has_fixed_size<rosapi::srv::SetParam_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosapi::srv::SetParam_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosapi::srv::SetParam_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::SetParam>()
{
  return "rosapi::srv::SetParam";
}

template<>
inline const char * name<rosapi::srv::SetParam>()
{
  return "rosapi/srv/SetParam";
}

template<>
struct has_fixed_size<rosapi::srv::SetParam>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi::srv::SetParam_Request>::value &&
    has_fixed_size<rosapi::srv::SetParam_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi::srv::SetParam>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi::srv::SetParam_Request>::value &&
    has_bounded_size<rosapi::srv::SetParam_Response>::value
  >
{
};

template<>
struct is_service<rosapi::srv::SetParam>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi::srv::SetParam_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi::srv::SetParam_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI__SRV__DETAIL__SET_PARAM__TRAITS_HPP_
