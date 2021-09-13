// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi:srv/GetTime.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__GET_TIME__BUILDER_HPP_
#define ROSAPI__SRV__DETAIL__GET_TIME__BUILDER_HPP_

#include "rosapi/srv/detail/get_time__struct.hpp"
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
auto build<::rosapi::srv::GetTime_Request>()
{
  return ::rosapi::srv::GetTime_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosapi


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_GetTime_Response_time
{
public:
  Init_GetTime_Response_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::GetTime_Response time(::rosapi::srv::GetTime_Response::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::GetTime_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::GetTime_Response>()
{
  return rosapi::srv::builder::Init_GetTime_Response_time();
}

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__GET_TIME__BUILDER_HPP_
