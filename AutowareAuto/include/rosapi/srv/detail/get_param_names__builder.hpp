// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi:srv/GetParamNames.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__GET_PARAM_NAMES__BUILDER_HPP_
#define ROSAPI__SRV__DETAIL__GET_PARAM_NAMES__BUILDER_HPP_

#include "rosapi/srv/detail/get_param_names__struct.hpp"
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
auto build<::rosapi::srv::GetParamNames_Request>()
{
  return ::rosapi::srv::GetParamNames_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosapi


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_GetParamNames_Response_names
{
public:
  Init_GetParamNames_Response_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::GetParamNames_Response names(::rosapi::srv::GetParamNames_Response::_names_type arg)
  {
    msg_.names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::GetParamNames_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::GetParamNames_Response>()
{
  return rosapi::srv::builder::Init_GetParamNames_Response_names();
}

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__GET_PARAM_NAMES__BUILDER_HPP_
