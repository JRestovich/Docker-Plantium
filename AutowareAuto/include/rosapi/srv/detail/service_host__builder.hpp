// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi:srv/ServiceHost.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SERVICE_HOST__BUILDER_HPP_
#define ROSAPI__SRV__DETAIL__SERVICE_HOST__BUILDER_HPP_

#include "rosapi/srv/detail/service_host__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_ServiceHost_Request_service
{
public:
  Init_ServiceHost_Request_service()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::ServiceHost_Request service(::rosapi::srv::ServiceHost_Request::_service_type arg)
  {
    msg_.service = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::ServiceHost_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::ServiceHost_Request>()
{
  return rosapi::srv::builder::Init_ServiceHost_Request_service();
}

}  // namespace rosapi


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_ServiceHost_Response_host
{
public:
  Init_ServiceHost_Response_host()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::ServiceHost_Response host(::rosapi::srv::ServiceHost_Response::_host_type arg)
  {
    msg_.host = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::ServiceHost_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::ServiceHost_Response>()
{
  return rosapi::srv::builder::Init_ServiceHost_Response_host();
}

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__SERVICE_HOST__BUILDER_HPP_
