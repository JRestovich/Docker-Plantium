// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi:srv/ServiceResponseDetails.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SERVICE_RESPONSE_DETAILS__TRAITS_HPP_
#define ROSAPI__SRV__DETAIL__SERVICE_RESPONSE_DETAILS__TRAITS_HPP_

#include "rosapi/srv/detail/service_response_details__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::ServiceResponseDetails_Request>()
{
  return "rosapi::srv::ServiceResponseDetails_Request";
}

template<>
inline const char * name<rosapi::srv::ServiceResponseDetails_Request>()
{
  return "rosapi/srv/ServiceResponseDetails_Request";
}

template<>
struct has_fixed_size<rosapi::srv::ServiceResponseDetails_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::ServiceResponseDetails_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::ServiceResponseDetails_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::ServiceResponseDetails_Response>()
{
  return "rosapi::srv::ServiceResponseDetails_Response";
}

template<>
inline const char * name<rosapi::srv::ServiceResponseDetails_Response>()
{
  return "rosapi/srv/ServiceResponseDetails_Response";
}

template<>
struct has_fixed_size<rosapi::srv::ServiceResponseDetails_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::ServiceResponseDetails_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::ServiceResponseDetails_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::ServiceResponseDetails>()
{
  return "rosapi::srv::ServiceResponseDetails";
}

template<>
inline const char * name<rosapi::srv::ServiceResponseDetails>()
{
  return "rosapi/srv/ServiceResponseDetails";
}

template<>
struct has_fixed_size<rosapi::srv::ServiceResponseDetails>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi::srv::ServiceResponseDetails_Request>::value &&
    has_fixed_size<rosapi::srv::ServiceResponseDetails_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi::srv::ServiceResponseDetails>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi::srv::ServiceResponseDetails_Request>::value &&
    has_bounded_size<rosapi::srv::ServiceResponseDetails_Response>::value
  >
{
};

template<>
struct is_service<rosapi::srv::ServiceResponseDetails>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi::srv::ServiceResponseDetails_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi::srv::ServiceResponseDetails_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI__SRV__DETAIL__SERVICE_RESPONSE_DETAILS__TRAITS_HPP_
