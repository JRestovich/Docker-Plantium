// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi:srv/ServiceType.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SERVICE_TYPE__BUILDER_HPP_
#define ROSAPI__SRV__DETAIL__SERVICE_TYPE__BUILDER_HPP_

#include "rosapi/srv/detail/service_type__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_ServiceType_Request_service
{
public:
  Init_ServiceType_Request_service()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::ServiceType_Request service(::rosapi::srv::ServiceType_Request::_service_type arg)
  {
    msg_.service = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::ServiceType_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::ServiceType_Request>()
{
  return rosapi::srv::builder::Init_ServiceType_Request_service();
}

}  // namespace rosapi


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_ServiceType_Response_type
{
public:
  Init_ServiceType_Response_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::ServiceType_Response type(::rosapi::srv::ServiceType_Response::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::ServiceType_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::ServiceType_Response>()
{
  return rosapi::srv::builder::Init_ServiceType_Response_type();
}

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__SERVICE_TYPE__BUILDER_HPP_
