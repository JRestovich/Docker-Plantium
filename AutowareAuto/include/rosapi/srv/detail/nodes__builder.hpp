// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi:srv/Nodes.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__NODES__BUILDER_HPP_
#define ROSAPI__SRV__DETAIL__NODES__BUILDER_HPP_

#include "rosapi/srv/detail/nodes__struct.hpp"
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
auto build<::rosapi::srv::Nodes_Request>()
{
  return ::rosapi::srv::Nodes_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosapi


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_Nodes_Response_nodes
{
public:
  Init_Nodes_Response_nodes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::Nodes_Response nodes(::rosapi::srv::Nodes_Response::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::Nodes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::Nodes_Response>()
{
  return rosapi::srv::builder::Init_Nodes_Response_nodes();
}

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__NODES__BUILDER_HPP_
