// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosapi:srv/GetParamNames.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__GET_PARAM_NAMES__STRUCT_H_
#define ROSAPI__SRV__DETAIL__GET_PARAM_NAMES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetParamNames in the package rosapi.
typedef struct rosapi__srv__GetParamNames_Request
{
  uint8_t structure_needs_at_least_one_member;
} rosapi__srv__GetParamNames_Request;

// Struct for a sequence of rosapi__srv__GetParamNames_Request.
typedef struct rosapi__srv__GetParamNames_Request__Sequence
{
  rosapi__srv__GetParamNames_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi__srv__GetParamNames_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'names'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetParamNames in the package rosapi.
typedef struct rosapi__srv__GetParamNames_Response
{
  rosidl_runtime_c__String__Sequence names;
} rosapi__srv__GetParamNames_Response;

// Struct for a sequence of rosapi__srv__GetParamNames_Response.
typedef struct rosapi__srv__GetParamNames_Response__Sequence
{
  rosapi__srv__GetParamNames_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi__srv__GetParamNames_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSAPI__SRV__DETAIL__GET_PARAM_NAMES__STRUCT_H_
