// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosapi:srv/SearchParam.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SEARCH_PARAM__STRUCT_H_
#define ROSAPI__SRV__DETAIL__SEARCH_PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/SearchParam in the package rosapi.
typedef struct rosapi__srv__SearchParam_Request
{
  rosidl_runtime_c__String name;
} rosapi__srv__SearchParam_Request;

// Struct for a sequence of rosapi__srv__SearchParam_Request.
typedef struct rosapi__srv__SearchParam_Request__Sequence
{
  rosapi__srv__SearchParam_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi__srv__SearchParam_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'global_name'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/SearchParam in the package rosapi.
typedef struct rosapi__srv__SearchParam_Response
{
  rosidl_runtime_c__String global_name;
} rosapi__srv__SearchParam_Response;

// Struct for a sequence of rosapi__srv__SearchParam_Response.
typedef struct rosapi__srv__SearchParam_Response__Sequence
{
  rosapi__srv__SearchParam_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosapi__srv__SearchParam_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSAPI__SRV__DETAIL__SEARCH_PARAM__STRUCT_H_
