// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi:srv/ServiceProviders.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SERVICE_PROVIDERS__BUILDER_HPP_
#define ROSAPI__SRV__DETAIL__SERVICE_PROVIDERS__BUILDER_HPP_

#include "rosapi/srv/detail/service_providers__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_ServiceProviders_Request_service
{
public:
  Init_ServiceProviders_Request_service()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::ServiceProviders_Request service(::rosapi::srv::ServiceProviders_Request::_service_type arg)
  {
    msg_.service = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::ServiceProviders_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::ServiceProviders_Request>()
{
  return rosapi::srv::builder::Init_ServiceProviders_Request_service();
}

}  // namespace rosapi


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_ServiceProviders_Response_providers
{
public:
  Init_ServiceProviders_Response_providers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::ServiceProviders_Response providers(::rosapi::srv::ServiceProviders_Response::_providers_type arg)
  {
    msg_.providers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::ServiceProviders_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::ServiceProviders_Response>()
{
  return rosapi::srv::builder::Init_ServiceProviders_Response_providers();
}

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__SERVICE_PROVIDERS__BUILDER_HPP_
