// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi:srv/NodeDetails.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__NODE_DETAILS__BUILDER_HPP_
#define ROSAPI__SRV__DETAIL__NODE_DETAILS__BUILDER_HPP_

#include "rosapi/srv/detail/node_details__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_NodeDetails_Request_node
{
public:
  Init_NodeDetails_Request_node()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::NodeDetails_Request node(::rosapi::srv::NodeDetails_Request::_node_type arg)
  {
    msg_.node = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::NodeDetails_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::NodeDetails_Request>()
{
  return rosapi::srv::builder::Init_NodeDetails_Request_node();
}

}  // namespace rosapi


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_NodeDetails_Response_services
{
public:
  explicit Init_NodeDetails_Response_services(::rosapi::srv::NodeDetails_Response & msg)
  : msg_(msg)
  {}
  ::rosapi::srv::NodeDetails_Response services(::rosapi::srv::NodeDetails_Response::_services_type arg)
  {
    msg_.services = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::NodeDetails_Response msg_;
};

class Init_NodeDetails_Response_publishing
{
public:
  explicit Init_NodeDetails_Response_publishing(::rosapi::srv::NodeDetails_Response & msg)
  : msg_(msg)
  {}
  Init_NodeDetails_Response_services publishing(::rosapi::srv::NodeDetails_Response::_publishing_type arg)
  {
    msg_.publishing = std::move(arg);
    return Init_NodeDetails_Response_services(msg_);
  }

private:
  ::rosapi::srv::NodeDetails_Response msg_;
};

class Init_NodeDetails_Response_subscribing
{
public:
  Init_NodeDetails_Response_subscribing()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeDetails_Response_publishing subscribing(::rosapi::srv::NodeDetails_Response::_subscribing_type arg)
  {
    msg_.subscribing = std::move(arg);
    return Init_NodeDetails_Response_publishing(msg_);
  }

private:
  ::rosapi::srv::NodeDetails_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::NodeDetails_Response>()
{
  return rosapi::srv::builder::Init_NodeDetails_Response_subscribing();
}

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__NODE_DETAILS__BUILDER_HPP_
