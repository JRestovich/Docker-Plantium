// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi:srv/Publishers.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__PUBLISHERS__BUILDER_HPP_
#define ROSAPI__SRV__DETAIL__PUBLISHERS__BUILDER_HPP_

#include "rosapi/srv/detail/publishers__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_Publishers_Request_topic
{
public:
  Init_Publishers_Request_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::Publishers_Request topic(::rosapi::srv::Publishers_Request::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::Publishers_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::Publishers_Request>()
{
  return rosapi::srv::builder::Init_Publishers_Request_topic();
}

}  // namespace rosapi


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_Publishers_Response_publishers
{
public:
  Init_Publishers_Response_publishers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::Publishers_Response publishers(::rosapi::srv::Publishers_Response::_publishers_type arg)
  {
    msg_.publishers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::Publishers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::Publishers_Response>()
{
  return rosapi::srv::builder::Init_Publishers_Response_publishers();
}

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__PUBLISHERS__BUILDER_HPP_
