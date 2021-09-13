// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosapi:srv/TopicType.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__TOPIC_TYPE__STRUCT_H_
#define ROSAPI__SRV__DETAIL__TOPIC_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'topic'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/TopicType in the package rosapi.
typedef struct rosapi__srv__TopicType_Request
{
  rosidl_runtime_c__String topic;
} rosapi__srv__TopicType_Request;

// Struct for a sequence of rosapi__srv__TopicType_Request.
typedef struct rosapi__srv__TopicType_Request__Sequence
{
  rosapi__srv__TopicType_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi__srv__TopicType_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'type'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/TopicType in the package rosapi.
typedef struct rosapi__srv__TopicType_Response
{
  rosidl_runtime_c__String type;
} rosapi__srv__TopicType_Response;

// Struct for a sequence of rosapi__srv__TopicType_Response.
typedef struct rosapi__srv__TopicType_Response__Sequence
{
  rosapi__srv__TopicType_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi__srv__TopicType_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSAPI__SRV__DETAIL__TOPIC_TYPE__STRUCT_H_
