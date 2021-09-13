// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi:srv/TopicsForType.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__TOPICS_FOR_TYPE__BUILDER_HPP_
#define ROSAPI__SRV__DETAIL__TOPICS_FOR_TYPE__BUILDER_HPP_

#include "rosapi/srv/detail/topics_for_type__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_TopicsForType_Request_type
{
public:
  Init_TopicsForType_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::TopicsForType_Request type(::rosapi::srv::TopicsForType_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::TopicsForType_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::TopicsForType_Request>()
{
  return rosapi::srv::builder::Init_TopicsForType_Request_type();
}

}  // namespace rosapi


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_TopicsForType_Response_topics
{
public:
  Init_TopicsForType_Response_topics()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::TopicsForType_Response topics(::rosapi::srv::TopicsForType_Response::_topics_type arg)
  {
    msg_.topics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::TopicsForType_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::TopicsForType_Response>()
{
  return rosapi::srv::builder::Init_TopicsForType_Response_topics();
}

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__TOPICS_FOR_TYPE__BUILDER_HPP_
