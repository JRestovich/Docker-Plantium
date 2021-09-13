// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi:srv/GetActionServers.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__GET_ACTION_SERVERS__TRAITS_HPP_
#define ROSAPI__SRV__DETAIL__GET_ACTION_SERVERS__TRAITS_HPP_

#include "rosapi/srv/detail/get_action_servers__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::GetActionServers_Request>()
{
  return "rosapi::srv::GetActionServers_Request";
}

template<>
inline const char * name<rosapi::srv::GetActionServers_Request>()
{
  return "rosapi/srv/GetActionServers_Request";
}

template<>
struct has_fixed_size<rosapi::srv::GetActionServers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosapi::srv::GetActionServers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosapi::srv::GetActionServers_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::GetActionServers_Response>()
{
  return "rosapi::srv::GetActionServers_Response";
}

template<>
inline const char * name<rosapi::srv::GetActionServers_Response>()
{
  return "rosapi/srv/GetActionServers_Response";
}

template<>
struct has_fixed_size<rosapi::srv::GetActionServers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::GetActionServers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::GetActionServers_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::GetActionServers>()
{
  return "rosapi::srv::GetActionServers";
}

template<>
inline const char * name<rosapi::srv::GetActionServers>()
{
  return "rosapi/srv/GetActionServers";
}

template<>
struct has_fixed_size<rosapi::srv::GetActionServers>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi::srv::GetActionServers_Request>::value &&
    has_fixed_size<rosapi::srv::GetActionServers_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi::srv::GetActionServers>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi::srv::GetActionServers_Request>::value &&
    has_bounded_size<rosapi::srv::GetActionServers_Response>::value
  >
{
};

template<>
struct is_service<rosapi::srv::GetActionServers>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi::srv::GetActionServers_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi::srv::GetActionServers_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI__SRV__DETAIL__GET_ACTION_SERVERS__TRAITS_HPP_
