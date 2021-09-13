// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi:srv/GetParamNames.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__GET_PARAM_NAMES__TRAITS_HPP_
#define ROSAPI__SRV__DETAIL__GET_PARAM_NAMES__TRAITS_HPP_

#include "rosapi/srv/detail/get_param_names__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::GetParamNames_Request>()
{
  return "rosapi::srv::GetParamNames_Request";
}

template<>
inline const char * name<rosapi::srv::GetParamNames_Request>()
{
  return "rosapi/srv/GetParamNames_Request";
}

template<>
struct has_fixed_size<rosapi::srv::GetParamNames_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosapi::srv::GetParamNames_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosapi::srv::GetParamNames_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::GetParamNames_Response>()
{
  return "rosapi::srv::GetParamNames_Response";
}

template<>
inline const char * name<rosapi::srv::GetParamNames_Response>()
{
  return "rosapi/srv/GetParamNames_Response";
}

template<>
struct has_fixed_size<rosapi::srv::GetParamNames_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::GetParamNames_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::GetParamNames_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::GetParamNames>()
{
  return "rosapi::srv::GetParamNames";
}

template<>
inline const char * name<rosapi::srv::GetParamNames>()
{
  return "rosapi/srv/GetParamNames";
}

template<>
struct has_fixed_size<rosapi::srv::GetParamNames>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi::srv::GetParamNames_Request>::value &&
    has_fixed_size<rosapi::srv::GetParamNames_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi::srv::GetParamNames>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi::srv::GetParamNames_Request>::value &&
    has_bounded_size<rosapi::srv::GetParamNames_Response>::value
  >
{
};

template<>
struct is_service<rosapi::srv::GetParamNames>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi::srv::GetParamNames_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi::srv::GetParamNames_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI__SRV__DETAIL__GET_PARAM_NAMES__TRAITS_HPP_
