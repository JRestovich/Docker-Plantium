// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosapi:srv/ServiceNode.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SERVICE_NODE__STRUCT_H_
#define ROSAPI__SRV__DETAIL__SERVICE_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'service'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/ServiceNode in the package rosapi.
typedef struct rosapi__srv__ServiceNode_Request
{
  rosidl_runtime_c__String service;
} rosapi__srv__ServiceNode_Request;

// Struct for a sequence of rosapi__srv__ServiceNode_Request.
typedef struct rosapi__srv__ServiceNode_Request__Sequence
{
  rosapi__srv__ServiceNode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi__srv__ServiceNode_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'node'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/ServiceNode in the package rosapi.
typedef struct rosapi__srv__ServiceNode_Response
{
  rosidl_runtime_c__String node;
} rosapi__srv__ServiceNode_Response;

// Struct for a sequence of rosapi__srv__ServiceNode_Response.
typedef struct rosapi__srv__ServiceNode_Response__Sequence
{
  rosapi__srv__ServiceNode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi__srv__ServiceNode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSAPI__SRV__DETAIL__SERVICE_NODE__STRUCT_H_
