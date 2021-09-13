// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi:srv/Topics.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__TOPICS__BUILDER_HPP_
#define ROSAPI__SRV__DETAIL__TOPICS__BUILDER_HPP_

#include "rosapi/srv/detail/topics__struct.hpp"
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
auto build<::rosapi::srv::Topics_Request>()
{
  return ::rosapi::srv::Topics_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosapi


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_Topics_Response_types
{
public:
  explicit Init_Topics_Response_types(::rosapi::srv::Topics_Response & msg)
  : msg_(msg)
  {}
  ::rosapi::srv::Topics_Response types(::rosapi::srv::Topics_Response::_types_type arg)
  {
    msg_.types = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::Topics_Response msg_;
};

class Init_Topics_Response_topics
{
public:
  Init_Topics_Response_topics()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Topics_Response_types topics(::rosapi::srv::Topics_Response::_topics_type arg)
  {
    msg_.topics = std::move(arg);
    return Init_Topics_Response_types(msg_);
  }

private:
  ::rosapi::srv::Topics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::Topics_Response>()
{
  return rosapi::srv::builder::Init_Topics_Response_topics();
}

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__TOPICS__BUILDER_HPP_
