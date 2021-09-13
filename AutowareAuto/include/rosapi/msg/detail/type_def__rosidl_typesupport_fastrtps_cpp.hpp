// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rosapi:msg/TypeDef.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__MSG__DETAIL__TYPE_DEF__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROSAPI__MSG__DETAIL__TYPE_DEF__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rosapi/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rosapi/msg/detail/type_def__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace rosapi
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi
cdr_serialize(
  const rosapi::msg::TypeDef & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rosapi::msg::TypeDef & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi
get_serialized_size(
  const rosapi::msg::TypeDef & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi
max_serialized_size_TypeDef(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rosapi

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosapi
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi, msg, TypeDef)();

#ifdef __cplusplus
}
#endif

#endif  // ROSAPI__MSG__DETAIL__TYPE_DEF__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
