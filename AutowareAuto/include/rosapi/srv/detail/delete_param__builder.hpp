// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi:srv/DeleteParam.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__DELETE_PARAM__BUILDER_HPP_
#define ROSAPI__SRV__DETAIL__DELETE_PARAM__BUILDER_HPP_

#include "rosapi/srv/detail/delete_param__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosapi
{

namespace srv
{

namespace builder
{

class Init_DeleteParam_Request_name
{
public:
  Init_DeleteParam_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rosapi::srv::DeleteParam_Request name(::rosapi::srv::DeleteParam_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::srv::DeleteParam_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::DeleteParam_Request>()
{
  return rosapi::srv::builder::Init_DeleteParam_Request_name();
}

}  // namespace rosapi


namespace rosapi
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::srv::DeleteParam_Response>()
{
  return ::rosapi::srv::DeleteParam_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__DELETE_PARAM__BUILDER_HPP_
