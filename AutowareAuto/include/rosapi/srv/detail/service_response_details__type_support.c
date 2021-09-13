// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosapi:srv/ServiceResponseDetails.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosapi/srv/detail/service_response_details__rosidl_typesupport_introspection_c.h"
#include "rosapi/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosapi/srv/detail/service_response_details__functions.h"
#include "rosapi/srv/detail/service_response_details__struct.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ServiceResponseDetails_Request__rosidl_typesupport_introspection_c__ServiceResponseDetails_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosapi__srv__ServiceResponseDetails_Request__init(message_memory);
}

void ServiceResponseDetails_Request__rosidl_typesupport_introspection_c__ServiceResponseDetails_Request_fini_function(void * message_memory)
{
  rosapi__srv__ServiceResponseDetails_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ServiceResponseDetails_Request__rosidl_typesupport_introspection_c__ServiceResponseDetails_Request_message_member_array[1] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi__srv__ServiceResponseDetails_Request, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ServiceResponseDetails_Request__rosidl_typesupport_introspection_c__ServiceResponseDetails_Request_message_members = {
  "rosapi__srv",  // message namespace
  "ServiceResponseDetails_Request",  // message name
  1,  // number of fields
  sizeof(rosapi__srv__ServiceResponseDetails_Request),
  ServiceResponseDetails_Request__rosidl_typesupport_introspection_c__ServiceResponseDetails_Request_message_member_array,  // message members
  ServiceResponseDetails_Request__rosidl_typesupport_introspection_c__ServiceResponseDetails_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ServiceResponseDetails_Request__rosidl_typesupport_introspection_c__ServiceResponseDetails_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ServiceResponseDetails_Request__rosidl_typesupport_introspection_c__ServiceResponseDetails_Request_message_type_support_handle = {
  0,
  &ServiceResponseDetails_Request__rosidl_typesupport_introspection_c__ServiceResponseDetails_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosapi
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, ServiceResponseDetails_Request)() {
  if (!ServiceResponseDetails_Request__rosidl_typesupport_introspection_c__ServiceResponseDetails_Request_message_type_support_handle.typesupport_identifier) {
    ServiceResponseDetails_Request__rosidl_typesupport_introspection_c__ServiceResponseDetails_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ServiceResponseDetails_Request__rosidl_typesupport_introspection_c__ServiceResponseDetails_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rosapi/srv/detail/service_response_details__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosapi/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rosapi/srv/detail/service_response_details__functions.h"
// already included above
// #include "rosapi/srv/detail/service_response_details__struct.h"


// Include directives for member types
// Member `typedefs`
#include "rosapi/msg/type_def.h"
// Member `typedefs`
#include "rosapi/msg/detail/type_def__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__ServiceResponseDetails_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosapi__srv__ServiceResponseDetails_Response__init(message_memory);
}

void ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__ServiceResponseDetails_Response_fini_function(void * message_memory)
{
  rosapi__srv__ServiceResponseDetails_Response__fini(message_memory);
}

size_t ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__size_function__TypeDef__typedefs(
  const void * untyped_member)
{
  const rosapi__msg__TypeDef__Sequence * member =
    (const rosapi__msg__TypeDef__Sequence *)(untyped_member);
  return member->size;
}

const void * ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__get_const_function__TypeDef__typedefs(
  const void * untyped_member, size_t index)
{
  const rosapi__msg__TypeDef__Sequence * member =
    (const rosapi__msg__TypeDef__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__get_function__TypeDef__typedefs(
  void * untyped_member, size_t index)
{
  rosapi__msg__TypeDef__Sequence * member =
    (rosapi__msg__TypeDef__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__resize_function__TypeDef__typedefs(
  void * untyped_member, size_t size)
{
  rosapi__msg__TypeDef__Sequence * member =
    (rosapi__msg__TypeDef__Sequence *)(untyped_member);
  rosapi__msg__TypeDef__Sequence__fini(member);
  return rosapi__msg__TypeDef__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__ServiceResponseDetails_Response_message_member_array[1] = {
  {
    "typedefs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosapi__srv__ServiceResponseDetails_Response, typedefs),  // bytes offset in struct
    NULL,  // default value
    ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__size_function__TypeDef__typedefs,  // size() function pointer
    ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__get_const_function__TypeDef__typedefs,  // get_const(index) function pointer
    ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__get_function__TypeDef__typedefs,  // get(index) function pointer
    ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__resize_function__TypeDef__typedefs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__ServiceResponseDetails_Response_message_members = {
  "rosapi__srv",  // message namespace
  "ServiceResponseDetails_Response",  // message name
  1,  // number of fields
  sizeof(rosapi__srv__ServiceResponseDetails_Response),
  ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__ServiceResponseDetails_Response_message_member_array,  // message members
  ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__ServiceResponseDetails_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__ServiceResponseDetails_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__ServiceResponseDetails_Response_message_type_support_handle = {
  0,
  &ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__ServiceResponseDetails_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosapi
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, ServiceResponseDetails_Response)() {
  ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__ServiceResponseDetails_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, msg, TypeDef)();
  if (!ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__ServiceResponseDetails_Response_message_type_support_handle.typesupport_identifier) {
    ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__ServiceResponseDetails_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ServiceResponseDetails_Response__rosidl_typesupport_introspection_c__ServiceResponseDetails_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosapi/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosapi/srv/detail/service_response_details__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rosapi__srv__detail__service_response_details__rosidl_typesupport_introspection_c__ServiceResponseDetails_service_members = {
  "rosapi__srv",  // service namespace
  "ServiceResponseDetails",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rosapi__srv__detail__service_response_details__rosidl_typesupport_introspection_c__ServiceResponseDetails_Request_message_type_support_handle,
  NULL  // response message
  // rosapi__srv__detail__service_response_details__rosidl_typesupport_introspection_c__ServiceResponseDetails_Response_message_type_support_handle
};

static rosidl_service_type_support_t rosapi__srv__detail__service_response_details__rosidl_typesupport_introspection_c__ServiceResponseDetails_service_type_support_handle = {
  0,
  &rosapi__srv__detail__service_response_details__rosidl_typesupport_introspection_c__ServiceResponseDetails_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, ServiceResponseDetails_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, ServiceResponseDetails_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosapi
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, ServiceResponseDetails)() {
  if (!rosapi__srv__detail__service_response_details__rosidl_typesupport_introspection_c__ServiceResponseDetails_service_type_support_handle.typesupport_identifier) {
    rosapi__srv__detail__service_response_details__rosidl_typesupport_introspection_c__ServiceResponseDetails_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rosapi__srv__detail__service_response_details__rosidl_typesupport_introspection_c__ServiceResponseDetails_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, ServiceResponseDetails_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosapi, srv, ServiceResponseDetails_Response)()->data;
  }

  return &rosapi__srv__detail__service_response_details__rosidl_typesupport_introspection_c__ServiceResponseDetails_service_type_support_handle;
}
