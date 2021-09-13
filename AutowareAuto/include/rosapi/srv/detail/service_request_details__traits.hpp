// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi:srv/ServiceRequestDetails.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SERVICE_REQUEST_DETAILS__TRAITS_HPP_
#define ROSAPI__SRV__DETAIL__SERVICE_REQUEST_DETAILS__TRAITS_HPP_

#include "rosapi/srv/detail/service_request_details__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::ServiceRequestDetails_Request>()
{
  return "rosapi::srv::ServiceRequestDetails_Request";
}

template<>
inline const char * name<rosapi::srv::ServiceRequestDetails_Request>()
{
  return "rosapi/srv/ServiceRequestDetails_Request";
}

template<>
struct has_fixed_size<rosapi::srv::ServiceRequestDetails_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::ServiceRequestDetails_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::ServiceRequestDetails_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::ServiceRequestDetails_Response>()
{
  return "rosapi::srv::ServiceRequestDetails_Response";
}

template<>
inline const char * name<rosapi::srv::ServiceRequestDetails_Response>()
{
  return "rosapi/srv/ServiceRequestDetails_Response";
}

template<>
struct has_fixed_size<rosapi::srv::ServiceRequestDetails_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::ServiceRequestDetails_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::ServiceRequestDetails_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::ServiceRequestDetails>()
{
  return "rosapi::srv::ServiceRequestDetails";
}

template<>
inline const char * name<rosapi::srv::ServiceRequestDetails>()
{
  return "rosapi/srv/ServiceRequestDetails";
}

template<>
struct has_fixed_size<rosapi::srv::ServiceRequestDetails>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi::srv::ServiceRequestDetails_Request>::value &&
    has_fixed_size<rosapi::srv::ServiceRequestDetails_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi::srv::ServiceRequestDetails>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi::srv::ServiceRequestDetails_Request>::value &&
    has_bounded_size<rosapi::srv::ServiceRequestDetails_Response>::value
  >
{
};

template<>
struct is_service<rosapi::srv::ServiceRequestDetails>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi::srv::ServiceRequestDetails_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi::srv::ServiceRequestDetails_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI__SRV__DETAIL__SERVICE_REQUEST_DETAILS__TRAITS_HPP_
