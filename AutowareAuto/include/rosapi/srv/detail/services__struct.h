// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosapi:srv/Services.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SERVICES__STRUCT_H_
#define ROSAPI__SRV__DETAIL__SERVICES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Services in the package rosapi.
typedef struct rosapi__srv__Services_Request
{
  uint8_t structure_needs_at_least_one_member;
} rosapi__srv__Services_Request;

// Struct for a sequence of rosapi__srv__Services_Request.
typedef struct rosapi__srv__Services_Request__Sequence
{
  rosapi__srv__Services_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi__srv__Services_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'services'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Services in the package rosapi.
typedef struct rosapi__srv__Services_Response
{
  rosidl_runtime_c__String__Sequence services;
} rosapi__srv__Services_Response;

// Struct for a sequence of rosapi__srv__Services_Response.
typedef struct rosapi__srv__Services_Response__Sequence
{
  rosapi__srv__Services_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi__srv__Services_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSAPI__SRV__DETAIL__SERVICES__STRUCT_H_
