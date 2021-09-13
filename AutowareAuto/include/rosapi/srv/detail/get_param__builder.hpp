// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi:srv/GetParam.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__GET_PARAM__BUILDER_HPP_
#define ROSAPI__SRV__DETAIL__GET_PARAM__BUILDER_HPP_

#include "rosapi/srv/detail/get_param__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_GetParam_Request_default_value
{
public:
  explicit Init_GetParam_Request_default_value(::rosapi::srv::GetParam_Request & msg)
  : msg_(msg)
  {}
  ::rosapi::srv::GetParam_Request default_value(::rosapi::srv::GetParam_Request::_default_value_type arg)
  {
    msg_.default_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::GetParam_Request msg_;
};

class Init_GetParam_Request_name
{
public:
  Init_GetParam_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetParam_Request_default_value name(::rosapi::srv::GetParam_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_GetParam_Request_default_value(msg_);
  }

private:
  ::rosapi::srv::GetParam_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::GetParam_Request>()
{
  return rosapi::srv::builder::Init_GetParam_Request_name();
}

}  // namespace rosapi


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_GetParam_Response_value
{
public:
  Init_GetParam_Response_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::GetParam_Response value(::rosapi::srv::GetParam_Response::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::GetParam_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::GetParam_Response>()
{
  return rosapi::srv::builder::Init_GetParam_Response_value();
}

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__GET_PARAM__BUILDER_HPP_
