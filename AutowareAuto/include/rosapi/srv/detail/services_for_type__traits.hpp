// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosapi:srv/ServicesForType.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SERVICES_FOR_TYPE__TRAITS_HPP_
#define ROSAPI__SRV__DETAIL__SERVICES_FOR_TYPE__TRAITS_HPP_

#include "rosapi/srv/detail/services_for_type__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::ServicesForType_Request>()
{
  return "rosapi::srv::ServicesForType_Request";
}

template<>
inline const char * name<rosapi::srv::ServicesForType_Request>()
{
  return "rosapi/srv/ServicesForType_Request";
}

template<>
struct has_fixed_size<rosapi::srv::ServicesForType_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::ServicesForType_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::ServicesForType_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::ServicesForType_Response>()
{
  return "rosapi::srv::ServicesForType_Response";
}

template<>
inline const char * name<rosapi::srv::ServicesForType_Response>()
{
  return "rosapi/srv/ServicesForType_Response";
}

template<>
struct has_fixed_size<rosapi::srv::ServicesForType_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosapi::srv::ServicesForType_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosapi::srv::ServicesForType_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosapi::srv::ServicesForType>()
{
  return "rosapi::srv::ServicesForType";
}

template<>
inline const char * name<rosapi::srv::ServicesForType>()
{
  return "rosapi/srv/ServicesForType";
}

template<>
struct has_fixed_size<rosapi::srv::ServicesForType>
  : std::integral_constant<
    bool,
    has_fixed_size<rosapi::srv::ServicesForType_Request>::value &&
    has_fixed_size<rosapi::srv::ServicesForType_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosapi::srv::ServicesForType>
  : std::integral_constant<
    bool,
    has_bounded_size<rosapi::srv::ServicesForType_Request>::value &&
    has_bounded_size<rosapi::srv::ServicesForType_Response>::value
  >
{
};

template<>
struct is_service<rosapi::srv::ServicesForType>
  : std::true_type
{
};

template<>
struct is_service_request<rosapi::srv::ServicesForType_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosapi::srv::ServicesForType_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSAPI__SRV__DETAIL__SERVICES_FOR_TYPE__TRAITS_HPP_
