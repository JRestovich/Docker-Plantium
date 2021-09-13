// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi:srv/ServiceNode.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SERVICE_NODE__TRAITS_HPP_
#define ROSAPI__SRV__DETAIL__SERVICE_NODE__TRAITS_HPP_

#include "rosapi/srv/detail/service_node__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::ServiceNode_Request>()
{
  return "rosapi::srv::ServiceNode_Request";
}

template<>
inline const char * name<rosapi::srv::ServiceNode_Request>()
{
  return "rosapi/srv/ServiceNode_Request";
}

template<>
struct has_fixed_size<rosapi::srv::ServiceNode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::ServiceNode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::ServiceNode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::ServiceNode_Response>()
{
  return "rosapi::srv::ServiceNode_Response";
}

template<>
inline const char * name<rosapi::srv::ServiceNode_Response>()
{
  return "rosapi/srv/ServiceNode_Response";
}

template<>
struct has_fixed_size<rosapi::srv::ServiceNode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::ServiceNode_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::ServiceNode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::ServiceNode>()
{
  return "rosapi::srv::ServiceNode";
}

template<>
inline const char * name<rosapi::srv::ServiceNode>()
{
  return "rosapi/srv/ServiceNode";
}

template<>
struct has_fixed_size<rosapi::srv::ServiceNode>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi::srv::ServiceNode_Request>::value &&
    has_fixed_size<rosapi::srv::ServiceNode_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi::srv::ServiceNode>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi::srv::ServiceNode_Request>::value &&
    has_bounded_size<rosapi::srv::ServiceNode_Response>::value
  >
{
};

template<>
struct is_service<rosapi::srv::ServiceNode>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi::srv::ServiceNode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi::srv::ServiceNode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI__SRV__DETAIL__SERVICE_NODE__TRAITS_HPP_
