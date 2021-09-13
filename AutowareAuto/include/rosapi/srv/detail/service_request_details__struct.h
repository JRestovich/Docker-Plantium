// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosapi:srv/ServiceRequestDetails.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SERVICE_REQUEST_DETAILS__STRUCT_H_
#define ROSAPI__SRV__DETAIL__SERVICE_REQUEST_DETAILS__STRUCT_H_

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

// Struct defined in srv/ServiceRequestDetails in the package rosapi.
typedef struct rosapi__srv__ServiceRequestDetails_Request
{
  rosidl_runtime_c__String type;
} rosapi__srv__ServiceRequestDetails_Request;

// Struct for a sequence of rosapi__srv__ServiceRequestDetails_Request.
typedef struct rosapi__srv__ServiceRequestDetails_Request__Sequence
{
  rosapi__srv__ServiceRequestDetails_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi__srv__ServiceRequestDetails_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'typedefs'
#include "rosapi/msg/detail/type_def__struct.h"

// Struct defined in srv/ServiceRequestDetails in the package rosapi.
typedef struct rosapi__srv__ServiceRequestDetails_Response
{
  rosapi__msg__TypeDef__Sequence typedefs;
} rosapi__srv__ServiceRequestDetails_Response;

// Struct for a sequence of rosapi__srv__ServiceRequestDetails_Response.
typedef struct rosapi__srv__ServiceRequestDetails_Response__Sequence
{
  rosapi__srv__ServiceRequestDetails_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi__srv__ServiceRequestDetails_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSAPI__SRV__DETAIL__SERVICE_REQUEST_DETAILS__STRUCT_H_
