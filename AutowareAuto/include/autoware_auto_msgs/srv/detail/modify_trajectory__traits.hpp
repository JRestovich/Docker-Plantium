// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_msgs:srv/ModifyTrajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_MSGS__SRV__DETAIL__MODIFY_TRAJECTORY__TRAITS_HPP_
#define AUTOWARE_AUTO_MSGS__SRV__DETAIL__MODIFY_TRAJECTORY__TRAITS_HPP_

#include "autoware_auto_msgs/srv/detail/modify_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'original_trajectory'
#include "autoware_auto_msgs/msg/detail/trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_msgs::srv::ModifyTrajectory_Request>()
{
  return "autoware_auto_msgs::srv::ModifyTrajectory_Request";
}

template<>
inline const char * name<autoware_auto_msgs::srv::ModifyTrajectory_Request>()
{
  return "autoware_auto_msgs/srv/ModifyTrajectory_Request";
}

template<>
struct has_fixed_size<autoware_auto_msgs::srv::ModifyTrajectory_Request>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_msgs::msg::Trajectory>::value> {};

template<>
struct has_bounded_size<autoware_auto_msgs::srv::ModifyTrajectory_Request>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_msgs::msg::Trajectory>::value> {};

template<>
struct is_message<autoware_auto_msgs::srv::ModifyTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'modified_trajectory'
// already included above
// #include "autoware_auto_msgs/msg/detail/trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_msgs::srv::ModifyTrajectory_Response>()
{
  return "autoware_auto_msgs::srv::ModifyTrajectory_Response";
}

template<>
inline const char * name<autoware_auto_msgs::srv::ModifyTrajectory_Response>()
{
  return "autoware_auto_msgs/srv/ModifyTrajectory_Response";
}

template<>
struct has_fixed_size<autoware_auto_msgs::srv::ModifyTrajectory_Response>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_msgs::msg::Trajectory>::value> {};

template<>
struct has_bounded_size<autoware_auto_msgs::srv::ModifyTrajectory_Response>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_msgs::msg::Trajectory>::value> {};

template<>
struct is_message<autoware_auto_msgs::srv::ModifyTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_msgs::srv::ModifyTrajectory>()
{
  return "autoware_auto_msgs::srv::ModifyTrajectory";
}

template<>
inline const char * name<autoware_auto_msgs::srv::ModifyTrajectory>()
{
  return "autoware_auto_msgs/srv/ModifyTrajectory";
}

template<>
struct has_fixed_size<autoware_auto_msgs::srv::ModifyTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_auto_msgs::srv::ModifyTrajectory_Request>::value &&
    has_fixed_size<autoware_auto_msgs::srv::ModifyTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_auto_msgs::srv::ModifyTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_auto_msgs::srv::ModifyTrajectory_Request>::value &&
    has_bounded_size<autoware_auto_msgs::srv::ModifyTrajectory_Response>::value
  >
{
};

template<>
struct is_service<autoware_auto_msgs::srv::ModifyTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_auto_msgs::srv::ModifyTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_auto_msgs::srv::ModifyTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_MSGS__SRV__DETAIL__MODIFY_TRAJECTORY__TRAITS_HPP_
