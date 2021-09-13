// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi:srv/ServiceProviders.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SERVICE_PROVIDERS__TRAITS_HPP_
#define ROSAPI__SRV__DETAIL__SERVICE_PROVIDERS__TRAITS_HPP_

#include "rosapi/srv/detail/service_providers__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::ServiceProviders_Request>()
{
  return "rosapi::srv::ServiceProviders_Request";
}

template<>
inline const char * name<rosapi::srv::ServiceProviders_Request>()
{
  return "rosapi/srv/ServiceProviders_Request";
}

template<>
struct has_fixed_size<rosapi::srv::ServiceProviders_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::ServiceProviders_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::ServiceProviders_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::ServiceProviders_Response>()
{
  return "rosapi::srv::ServiceProviders_Response";
}

template<>
inline const char * name<rosapi::srv::ServiceProviders_Response>()
{
  return "rosapi/srv/ServiceProviders_Response";
}

template<>
struct has_fixed_size<rosapi::srv::ServiceProviders_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::ServiceProviders_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::ServiceProviders_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::ServiceProviders>()
{
  return "rosapi::srv::ServiceProviders";
}

template<>
inline const char * name<rosapi::srv::ServiceProviders>()
{
  return "rosapi/srv/ServiceProviders";
}

template<>
struct has_fixed_size<rosapi::srv::ServiceProviders>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi::srv::ServiceProviders_Request>::value &&
    has_fixed_size<rosapi::srv::ServiceProviders_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi::srv::ServiceProviders>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi::srv::ServiceProviders_Request>::value &&
    has_bounded_size<rosapi::srv::ServiceProviders_Response>::value
  >
{
};

template<>
struct is_service<rosapi::srv::ServiceProviders>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi::srv::ServiceProviders_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi::srv::ServiceProviders_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI__SRV__DETAIL__SERVICE_PROVIDERS__TRAITS_HPP_
