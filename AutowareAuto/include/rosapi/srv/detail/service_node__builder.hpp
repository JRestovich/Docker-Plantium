// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi:srv/ServiceNode.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SERVICE_NODE__BUILDER_HPP_
#define ROSAPI__SRV__DETAIL__SERVICE_NODE__BUILDER_HPP_

#include "rosapi/srv/detail/service_node__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_ServiceNode_Request_service
{
public:
  Init_ServiceNode_Request_service()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::ServiceNode_Request service(::rosapi::srv::ServiceNode_Request::_service_type arg)
  {
    msg_.service = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::ServiceNode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::ServiceNode_Request>()
{
  return rosapi::srv::builder::Init_ServiceNode_Request_service();
}

}  // namespace rosapi


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_ServiceNode_Response_node
{
public:
  Init_ServiceNode_Response_node()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::ServiceNode_Response node(::rosapi::srv::ServiceNode_Response::_node_type arg)
  {
    msg_.node = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::ServiceNode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::ServiceNode_Response>()
{
  return rosapi::srv::builder::Init_ServiceNode_Response_node();
}

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__SERVICE_NODE__BUILDER_HPP_
