// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosapi:srv/GetTime.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosapi/srv/detail/get_time__rosidl_typesupport_introspection_c.h"
#include "rosapi/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosapi/srv/detail/get_time__functions.h"
#include "rosapi/srv/detail/get_time__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetTime_Request__rosidl_typesupport_introspection_c__GetTime_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosapi__srv__GetTime_Request__init(message_memory);
}

void GetTime_Request__rosidl_typesupport_introspection_c__GetTime_Request_fini_function(void * message_memory)
{
  rosapi__srv__GetTime_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetTime_Request__rosidl_typesupport_introspection_c__GetTime_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi__srv__GetTime_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetTime_Request__rosidl_typesupport_introspection_c__GetTime_Request_message_members = {
  "rosapi__srv",  // message namespace
  "GetTime_Request",  // message name
  1,  // number of fields
  sizeof(rosapi__srv__GetTime_Request),
  GetTime_Request__rosidl_typesupport_introspection_c__GetTime_Request_message_member_array,  // message members
  GetTime_Request__rosidl_typesupport_introspection_c__GetTime_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetTime_Request__rosidl_typesupport_introspection_c__GetTime_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetTime_Request__rosidl_typesupport_introspection_c__GetTime_Request_message_type_support_handle = {
  0,
  &GetTime_Request__rosidl_typesupport_introspection_c__GetTime_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosapi
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, GetTime_Request)() {
  if (!GetTime_Request__rosidl_typesupport_introspection_c__GetTime_Request_message_type_support_handle.typesupport_identifier) {
    GetTime_Request__rosidl_typesupport_introspection_c__GetTime_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetTime_Request__rosidl_typesupport_introspection_c__GetTime_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rosapi/srv/detail/get_time__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosapi/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rosapi/srv/detail/get_time__functions.h"
// already included above
// #include "rosapi/srv/detail/get_time__struct.h"


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/time.h"
// Member `time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetTime_Response__rosidl_typesupport_introspection_c__GetTime_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosapi__srv__GetTime_Response__init(message_memory);
}

void GetTime_Response__rosidl_typesupport_introspection_c__GetTime_Response_fini_function(void * message_memory)
{
  rosapi__srv__GetTime_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetTime_Response__rosidl_typesupport_introspection_c__GetTime_Response_message_member_array[1] = {
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi__srv__GetTime_Response, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetTime_Response__rosidl_typesupport_introspection_c__GetTime_Response_message_members = {
  "rosapi__srv",  // message namespace
  "GetTime_Response",  // message name
  1,  // number of fields
  sizeof(rosapi__srv__GetTime_Response),
  GetTime_Response__rosidl_typesupport_introspection_c__GetTime_Response_message_member_array,  // message members
  GetTime_Response__rosidl_typesupport_introspection_c__GetTime_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetTime_Response__rosidl_typesupport_introspection_c__GetTime_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetTime_Response__rosidl_typesupport_introspection_c__GetTime_Response_message_type_support_handle = {
  0,
  &GetTime_Response__rosidl_typesupport_introspection_c__GetTime_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosapi
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, GetTime_Response)() {
  GetTime_Response__rosidl_typesupport_introspection_c__GetTime_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!GetTime_Response__rosidl_typesupport_introspection_c__GetTime_Response_message_type_support_handle.typesupport_identifier) {
    GetTime_Response__rosidl_typesupport_introspection_c__GetTime_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetTime_Response__rosidl_typesupport_introspection_c__GetTime_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosapi/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosapi/srv/detail/get_time__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rosapi__srv__detail__get_time__rosidl_typesupport_introspection_c__GetTime_service_members = {
  "rosapi__srv",  // service namespace
  "GetTime",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rosapi__srv__detail__get_time__rosidl_typesupport_introspection_c__GetTime_Request_message_type_support_handle,
  NULL  // response message
  // rosapi__srv__detail__get_time__rosidl_typesupport_introspection_c__GetTime_Response_message_type_support_handle
};

static rosidl_service_type_support_t rosapi__srv__detail__get_time__rosidl_typesupport_introspection_c__GetTime_service_type_support_handle = {
  0,
  &rosapi__srv__detail__get_time__rosidl_typesupport_introspection_c__GetTime_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, GetTime_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, GetTime_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosapi
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, GetTime)() {
  if (!rosapi__srv__detail__get_time__rosidl_typesupport_introspection_c__GetTime_service_type_support_handle.typesupport_identifier) {
    rosapi__srv__detail__get_time__rosidl_typesupport_introspection_c__GetTime_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rosapi__srv__detail__get_time__rosidl_typesupport_introspection_c__GetTime_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, GetTime_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, GetTime_Response)()->data;
  }

  return &rosapi__srv__detail__get_time__rosidl_typesupport_introspection_c__GetTime_service_type_support_handle;
}
