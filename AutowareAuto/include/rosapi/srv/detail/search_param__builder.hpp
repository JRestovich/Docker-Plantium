// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi:srv/SearchParam.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SEARCH_PARAM__BUILDER_HPP_
#define ROSAPI__SRV__DETAIL__SEARCH_PARAM__BUILDER_HPP_

#include "rosapi/srv/detail/search_param__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_SearchParam_Request_name
{
public:
  Init_SearchParam_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::SearchParam_Request name(::rosapi::srv::SearchParam_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::SearchParam_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::SearchParam_Request>()
{
  return rosapi::srv::builder::Init_SearchParam_Request_name();
}

}  // namespace rosapi


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_SearchParam_Response_global_name
{
public:
  Init_SearchParam_Response_global_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::SearchParam_Response global_name(::rosapi::srv::SearchParam_Response::_global_name_type arg)
  {
    msg_.global_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::SearchParam_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::SearchParam_Response>()
{
  return rosapi::srv::builder::Init_SearchParam_Response_global_name();
}

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__SEARCH_PARAM__BUILDER_HPP_
