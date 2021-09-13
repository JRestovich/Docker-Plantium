// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rosapi:msg/TypeDef.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__MSG__DETAIL__TYPE_DEF__BUILDER_HPP_
#define ROSAPI__MSG__DETAIL__TYPE_DEF__BUILDER_HPP_

#include "rosapi/msg/detail/type_def__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rosapi
{

namespace msg
{

namespace builder
{

class Init_TypeDef_constvalues
{
public:
  explicit Init_TypeDef_constvalues(::rosapi::msg::TypeDef & msg)
  : msg_(msg)
  {}
  ::rosapi::msg::TypeDef constvalues(::rosapi::msg::TypeDef::_constvalues_type arg)
  {
    msg_.constvalues = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rosapi::msg::TypeDef msg_;
};

class Init_TypeDef_constnames
{
public:
  explicit Init_TypeDef_constnames(::rosapi::msg::TypeDef & msg)
  : msg_(msg)
  {}
  Init_TypeDef_constvalues constnames(::rosapi::msg::TypeDef::_constnames_type arg)
  {
    msg_.constnames = std::move(arg);
    return Init_TypeDef_constvalues(msg_);
  }

private:
  ::rosapi::msg::TypeDef msg_;
};

class Init_TypeDef_examples
{
public:
  explicit Init_TypeDef_examples(::rosapi::msg::TypeDef & msg)
  : msg_(msg)
  {}
  Init_TypeDef_constnames examples(::rosapi::msg::TypeDef::_examples_type arg)
  {
    msg_.examples = std::move(arg);
    return Init_TypeDef_constnames(msg_);
  }

private:
  ::rosapi::msg::TypeDef msg_;
};

class Init_TypeDef_fieldarraylen
{
public:
  explicit Init_TypeDef_fieldarraylen(::rosapi::msg::TypeDef & msg)
  : msg_(msg)
  {}
  Init_TypeDef_examples fieldarraylen(::rosapi::msg::TypeDef::_fieldarraylen_type arg)
  {
    msg_.fieldarraylen = std::move(arg);
    return Init_TypeDef_examples(msg_);
  }

private:
  ::rosapi::msg::TypeDef msg_;
};

class Init_TypeDef_fieldtypes
{
public:
  explicit Init_TypeDef_fieldtypes(::rosapi::msg::TypeDef & msg)
  : msg_(msg)
  {}
  Init_TypeDef_fieldarraylen fieldtypes(::rosapi::msg::TypeDef::_fieldtypes_type arg)
  {
    msg_.fieldtypes = std::move(arg);
    return Init_TypeDef_fieldarraylen(msg_);
  }

private:
  ::rosapi::msg::TypeDef msg_;
};

class Init_TypeDef_fieldnames
{
public:
  explicit Init_TypeDef_fieldnames(::rosapi::msg::TypeDef & msg)
  : msg_(msg)
  {}
  Init_TypeDef_fieldtypes fieldnames(::rosapi::msg::TypeDef::_fieldnames_type arg)
  {
    msg_.fieldnames = std::move(arg);
    return Init_TypeDef_fieldtypes(msg_);
  }

private:
  ::rosapi::msg::TypeDef msg_;
};

class Init_TypeDef_type
{
public:
  Init_TypeDef_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TypeDef_fieldnames type(::rosapi::msg::TypeDef::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_TypeDef_fieldnames(msg_);
  }

private:
  ::rosapi::msg::TypeDef msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rosapi::msg::TypeDef>()
{
  return rosapi::msg::builder::Init_TypeDef_type();
}

}  // namespace rosapi

#endif  // ROSAPI__MSG__DETAIL__TYPE_DEF__BUILDER_HPP_
