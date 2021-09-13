// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi:srv/Services.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SERVICES__BUILDER_HPP_
#define ROSAPI__SRV__DETAIL__SERVICES__BUILDER_HPP_

#include "rosapi/srv/detail/services__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosapi
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::Services_Request>()
{
  return ::rosapi::srv::Services_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosapi


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_Services_Response_services
{
public:
  Init_Services_Response_services()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::Services_Response services(::rosapi::srv::Services_Response::_services_type arg)
  {
    msg_.services = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::Services_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::Services_Response>()
{
  return rosapi::srv::builder::Init_Services_Response_services();
}

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__SERVICES__BUILDER_HPP_
