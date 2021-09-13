// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi:srv/HasParam.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__HAS_PARAM__BUILDER_HPP_
#define ROSAPI__SRV__DETAIL__HAS_PARAM__BUILDER_HPP_

#include "rosapi/srv/detail/has_param__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_HasParam_Request_name
{
public:
  Init_HasParam_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::HasParam_Request name(::rosapi::srv::HasParam_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::HasParam_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::HasParam_Request>()
{
  return rosapi::srv::builder::Init_HasParam_Request_name();
}

}  // namespace rosapi


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_HasParam_Response_exists
{
public:
  Init_HasParam_Response_exists()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::HasParam_Response exists(::rosapi::srv::HasParam_Response::_exists_type arg)
  {
    msg_.exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::HasParam_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::HasParam_Response>()
{
  return rosapi::srv::builder::Init_HasParam_Response_exists();
}

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__HAS_PARAM__BUILDER_HPP_
