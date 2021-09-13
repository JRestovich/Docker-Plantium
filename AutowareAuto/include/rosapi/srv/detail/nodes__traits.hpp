// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi:srv/Nodes.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__NODES__TRAITS_HPP_
#define ROSAPI__SRV__DETAIL__NODES__TRAITS_HPP_

#include "rosapi/srv/detail/nodes__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::Nodes_Request>()
{
  return "rosapi::srv::Nodes_Request";
}

template<>
inline const char * name<rosapi::srv::Nodes_Request>()
{
  return "rosapi/srv/Nodes_Request";
}

template<>
struct has_fixed_size<rosapi::srv::Nodes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosapi::srv::Nodes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosapi::srv::Nodes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::Nodes_Response>()
{
  return "rosapi::srv::Nodes_Response";
}

template<>
inline const char * name<rosapi::srv::Nodes_Response>()
{
  return "rosapi/srv/Nodes_Response";
}

template<>
struct has_fixed_size<rosapi::srv::Nodes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::Nodes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::Nodes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::Nodes>()
{
  return "rosapi::srv::Nodes";
}

template<>
inline const char * name<rosapi::srv::Nodes>()
{
  return "rosapi/srv/Nodes";
}

template<>
struct has_fixed_size<rosapi::srv::Nodes>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi::srv::Nodes_Request>::value &&
    has_fixed_size<rosapi::srv::Nodes_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi::srv::Nodes>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi::srv::Nodes_Request>::value &&
    has_bounded_size<rosapi::srv::Nodes_Response>::value
  >
{
};

template<>
struct is_service<rosapi::srv::Nodes>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi::srv::Nodes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi::srv::Nodes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI__SRV__DETAIL__NODES__TRAITS_HPP_
