// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi:srv/SearchParam.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SEARCH_PARAM__TRAITS_HPP_
#define ROSAPI__SRV__DETAIL__SEARCH_PARAM__TRAITS_HPP_

#include "rosapi/srv/detail/search_param__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::SearchParam_Request>()
{
  return "rosapi::srv::SearchParam_Request";
}

template<>
inline const char * name<rosapi::srv::SearchParam_Request>()
{
  return "rosapi/srv/SearchParam_Request";
}

template<>
struct has_fixed_size<rosapi::srv::SearchParam_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::SearchParam_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::SearchParam_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::SearchParam_Response>()
{
  return "rosapi::srv::SearchParam_Response";
}

template<>
inline const char * name<rosapi::srv::SearchParam_Response>()
{
  return "rosapi/srv/SearchParam_Response";
}

template<>
struct has_fixed_size<rosapi::srv::SearchParam_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::SearchParam_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::SearchParam_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::SearchParam>()
{
  return "rosapi::srv::SearchParam";
}

template<>
inline const char * name<rosapi::srv::SearchParam>()
{
  return "rosapi/srv/SearchParam";
}

template<>
struct has_fixed_size<rosapi::srv::SearchParam>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi::srv::SearchParam_Request>::value &&
    has_fixed_size<rosapi::srv::SearchParam_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi::srv::SearchParam>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi::srv::SearchParam_Request>::value &&
    has_bounded_size<rosapi::srv::SearchParam_Response>::value
  >
{
};

template<>
struct is_service<rosapi::srv::SearchParam>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi::srv::SearchParam_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi::srv::SearchParam_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI__SRV__DETAIL__SEARCH_PARAM__TRAITS_HPP_
