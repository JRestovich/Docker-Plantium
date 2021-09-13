// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosapi:srv/ServiceHost.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosapi/srv/detail/service_host__rosidl_typesupport_introspection_c.h"
#include "rosapi/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosapi/srv/detail/service_host__functions.h"
#include "rosapi/srv/detail/service_host__struct.h"


// Include directives for member types
// Member `service`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ServiceHost_Request__rosidl_typesupport_introspection_c__ServiceHost_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosapi__srv__ServiceHost_Request__init(message_memory);
}

void ServiceHost_Request__rosidl_typesupport_introspection_c__ServiceHost_Request_fini_function(void * message_memory)
{
  rosapi__srv__ServiceHost_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ServiceHost_Request__rosidl_typesupport_introspection_c__ServiceHost_Request_message_member_array[1] = {
  {
    "service",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi__srv__ServiceHost_Request, service),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ServiceHost_Request__rosidl_typesupport_introspection_c__ServiceHost_Request_message_members = {
  "rosapi__srv",  // message namespace
  "ServiceHost_Request",  // message name
  1,  // number of fields
  sizeof(rosapi__srv__ServiceHost_Request),
  ServiceHost_Request__rosidl_typesupport_introspection_c__ServiceHost_Request_message_member_array,  // message members
  ServiceHost_Request__rosidl_typesupport_introspection_c__ServiceHost_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ServiceHost_Request__rosidl_typesupport_introspection_c__ServiceHost_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ServiceHost_Request__rosidl_typesupport_introspection_c__ServiceHost_Request_message_type_support_handle = {
  0,
  &ServiceHost_Request__rosidl_typesupport_introspection_c__ServiceHost_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosapi
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, ServiceHost_Request)() {
  if (!ServiceHost_Request__rosidl_typesupport_introspection_c__ServiceHost_Request_message_type_support_handle.typesupport_identifier) {
    ServiceHost_Request__rosidl_typesupport_introspection_c__ServiceHost_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ServiceHost_Request__rosidl_typesupport_introspection_c__ServiceHost_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rosapi/srv/detail/service_host__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosapi/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rosapi/srv/detail/service_host__functions.h"
// already included above
// #include "rosapi/srv/detail/service_host__struct.h"


// Include directives for member types
// Member `host`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ServiceHost_Response__rosidl_typesupport_introspection_c__ServiceHost_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosapi__srv__ServiceHost_Response__init(message_memory);
}

void ServiceHost_Response__rosidl_typesupport_introspection_c__ServiceHost_Response_fini_function(void * message_memory)
{
  rosapi__srv__ServiceHost_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ServiceHost_Response__rosidl_typesupport_introspection_c__ServiceHost_Response_message_member_array[1] = {
  {
    "host",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi__srv__ServiceHost_Response, host),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ServiceHost_Response__rosidl_typesupport_introspection_c__ServiceHost_Response_message_members = {
  "rosapi__srv",  // message namespace
  "ServiceHost_Response",  // message name
  1,  // number of fields
  sizeof(rosapi__srv__ServiceHost_Response),
  ServiceHost_Response__rosidl_typesupport_introspection_c__ServiceHost_Response_message_member_array,  // message members
  ServiceHost_Response__rosidl_typesupport_introspection_c__ServiceHost_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ServiceHost_Response__rosidl_typesupport_introspection_c__ServiceHost_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ServiceHost_Response__rosidl_typesupport_introspection_c__ServiceHost_Response_message_type_support_handle = {
  0,
  &ServiceHost_Response__rosidl_typesupport_introspection_c__ServiceHost_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosapi
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, ServiceHost_Response)() {
  if (!ServiceHost_Response__rosidl_typesupport_introspection_c__ServiceHost_Response_message_type_support_handle.typesupport_identifier) {
    ServiceHost_Response__rosidl_typesupport_introspection_c__ServiceHost_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ServiceHost_Response__rosidl_typesupport_introspection_c__ServiceHost_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosapi/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosapi/srv/detail/service_host__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rosapi__srv__detail__service_host__rosidl_typesupport_introspection_c__ServiceHost_service_members = {
  "rosapi__srv",  // service namespace
  "ServiceHost",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rosapi__srv__detail__service_host__rosidl_typesupport_introspection_c__ServiceHost_Request_message_type_support_handle,
  NULL  // response message
  // rosapi__srv__detail__service_host__rosidl_typesupport_introspection_c__ServiceHost_Response_message_type_support_handle
};

static rosidl_service_type_support_t rosapi__srv__detail__service_host__rosidl_typesupport_introspection_c__ServiceHost_service_type_support_handle = {
  0,
  &rosapi__srv__detail__service_host__rosidl_typesupport_introspection_c__ServiceHost_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, ServiceHost_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, ServiceHost_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosapi
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, ServiceHost)() {
  if (!rosapi__srv__detail__service_host__rosidl_typesupport_introspection_c__ServiceHost_service_type_support_handle.typesupport_identifier) {
    rosapi__srv__detail__service_host__rosidl_typesupport_introspection_c__ServiceHost_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rosapi__srv__detail__service_host__rosidl_typesupport_introspection_c__ServiceHost_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, ServiceHost_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, ServiceHost_Response)()->data;
  }

  return &rosapi__srv__detail__service_host__rosidl_typesupport_introspection_c__ServiceHost_service_type_support_handle;
}
