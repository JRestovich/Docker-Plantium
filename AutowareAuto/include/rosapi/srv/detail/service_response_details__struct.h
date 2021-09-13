// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosapi:srv/ServiceResponseDetails.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SERVICE_RESPONSE_DETAILS__STRUCT_H_
#define ROSAPI__SRV__DETAIL__SERVICE_RESPONSE_DETAILS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/ServiceResponseDetails in the package rosapi.
typedef struct rosapi__srv__ServiceResponseDetails_Request
{
  rosidl_runtime_c__String type;
} rosapi__srv__ServiceResponseDetails_Request;

// Struct for a sequence of rosapi__srv__ServiceResponseDetails_Request.
typedef struct rosapi__srv__ServiceResponseDetails_Request__Sequence
{
  rosapi__srv__ServiceResponseDetails_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi__srv__ServiceResponseDetails_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'typedefs'
#include "rosapi/msg/detail/type_def__struct.h"

// Struct defined in srv/ServiceResponseDetails in the package rosapi.
typedef struct rosapi__srv__ServiceResponseDetails_Response
{
  rosapi__msg__TypeDef__Sequence typedefs;
} rosapi__srv__ServiceResponseDetails_Response;

// Struct for a sequence of rosapi__srv__ServiceResponseDetails_Response.
typedef struct rosapi__srv__ServiceResponseDetails_Response__Sequence
{
  rosapi__srv__ServiceResponseDetails_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi__srv__ServiceResponseDetails_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSAPI__SRV__DETAIL__SERVICE_RESPONSE_DETAILS__STRUCT_H_
