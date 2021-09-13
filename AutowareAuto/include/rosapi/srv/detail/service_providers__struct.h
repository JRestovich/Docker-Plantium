// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosapi:srv/ServiceProviders.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SERVICE_PROVIDERS__STRUCT_H_
#define ROSAPI__SRV__DETAIL__SERVICE_PROVIDERS__STRUCT_H_

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

// Struct defined in srv/ServiceProviders in the package rosapi.
typedef struct rosapi__srv__ServiceProviders_Request
{
  rosidl_runtime_c__String service;
} rosapi__srv__ServiceProviders_Request;

// Struct for a sequence of rosapi__srv__ServiceProviders_Request.
typedef struct rosapi__srv__ServiceProviders_Request__Sequence
{
  rosapi__srv__ServiceProviders_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi__srv__ServiceProviders_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'providers'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/ServiceProviders in the package rosapi.
typedef struct rosapi__srv__ServiceProviders_Response
{
  rosidl_runtime_c__String__Sequence providers;
} rosapi__srv__ServiceProviders_Response;

// Struct for a sequence of rosapi__srv__ServiceProviders_Response.
typedef struct rosapi__srv__ServiceProviders_Response__Sequence
{
  rosapi__srv__ServiceProviders_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi__srv__ServiceProviders_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSAPI__SRV__DETAIL__SERVICE_PROVIDERS__STRUCT_H_
