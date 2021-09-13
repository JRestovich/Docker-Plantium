// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi:srv/TopicType.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__TOPIC_TYPE__BUILDER_HPP_
#define ROSAPI__SRV__DETAIL__TOPIC_TYPE__BUILDER_HPP_

#include "rosapi/srv/detail/topic_type__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_TopicType_Request_topic
{
public:
  Init_TopicType_Request_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::TopicType_Request topic(::rosapi::srv::TopicType_Request::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::TopicType_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::TopicType_Request>()
{
  return rosapi::srv::builder::Init_TopicType_Request_topic();
}

}  // namespace rosapi


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_TopicType_Response_type
{
public:
  Init_TopicType_Response_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::TopicType_Response type(::rosapi::srv::TopicType_Response::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::TopicType_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::TopicType_Response>()
{
  return rosapi::srv::builder::Init_TopicType_Response_type();
}

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__TOPIC_TYPE__BUILDER_HPP_
