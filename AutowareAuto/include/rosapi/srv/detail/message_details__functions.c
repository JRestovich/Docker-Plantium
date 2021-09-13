// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosapi:srv/MessageDetails.idl
// generated code does not contain a copyright notice
#include "rosapi/srv/detail/message_details__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"

bool
rosapi__srv__MessageDetails_Request__init(rosapi__srv__MessageDetails_Request * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    rosapi__srv__MessageDetails_Request__fini(msg);
    return false;
  }
  return true;
}

void
rosapi__srv__MessageDetails_Request__fini(rosapi__srv__MessageDetails_Request * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
}

rosapi__srv__MessageDetails_Request *
rosapi__srv__MessageDetails_Request__create()
{
  rosapi__srv__MessageDetails_Request * msg = (rosapi__srv__MessageDetails_Request *)malloc(sizeof(rosapi__srv__MessageDetails_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosapi__srv__MessageDetails_Request));
  bool success = rosapi__srv__MessageDetails_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosapi__srv__MessageDetails_Request__destroy(rosapi__srv__MessageDetails_Request * msg)
{
  if (msg) {
    rosapi__srv__MessageDetails_Request__fini(msg);
  }
  free(msg);
}


bool
rosapi__srv__MessageDetails_Request__Sequence__init(rosapi__srv__MessageDetails_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosapi__srv__MessageDetails_Request * data = NULL;
  if (size) {
    data = (rosapi__srv__MessageDetails_Request *)calloc(size, sizeof(rosapi__srv__MessageDetails_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosapi__srv__MessageDetails_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosapi__srv__MessageDetails_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rosapi__srv__MessageDetails_Request__Sequence__fini(rosapi__srv__MessageDetails_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosapi__srv__MessageDetails_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rosapi__srv__MessageDetails_Request__Sequence *
rosapi__srv__MessageDetails_Request__Sequence__create(size_t size)
{
  rosapi__srv__MessageDetails_Request__Sequence * array = (rosapi__srv__MessageDetails_Request__Sequence *)malloc(sizeof(rosapi__srv__MessageDetails_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosapi__srv__MessageDetails_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosapi__srv__MessageDetails_Request__Sequence__destroy(rosapi__srv__MessageDetails_Request__Sequence * array)
{
  if (array) {
    rosapi__srv__MessageDetails_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `typedefs`
#include "rosapi/msg/detail/type_def__functions.h"

bool
rosapi__srv__MessageDetails_Response__init(rosapi__srv__MessageDetails_Response * msg)
{
  if (!msg) {
    return false;
  }
  // typedefs
  if (!rosapi__msg__TypeDef__Sequence__init(&msg->typedefs, 0)) {
    rosapi__srv__MessageDetails_Response__fini(msg);
    return false;
  }
  return true;
}

void
rosapi__srv__MessageDetails_Response__fini(rosapi__srv__MessageDetails_Response * msg)
{
  if (!msg) {
    return;
  }
  // typedefs
  rosapi__msg__TypeDef__Sequence__fini(&msg->typedefs);
}

rosapi__srv__MessageDetails_Response *
rosapi__srv__MessageDetails_Response__create()
{
  rosapi__srv__MessageDetails_Response * msg = (rosapi__srv__MessageDetails_Response *)malloc(sizeof(rosapi__srv__MessageDetails_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosapi__srv__MessageDetails_Response));
  bool success = rosapi__srv__MessageDetails_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosapi__srv__MessageDetails_Response__destroy(rosapi__srv__MessageDetails_Response * msg)
{
  if (msg) {
    rosapi__srv__MessageDetails_Response__fini(msg);
  }
  free(msg);
}


bool
rosapi__srv__MessageDetails_Response__Sequence__init(rosapi__srv__MessageDetails_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosapi__srv__MessageDetails_Response * data = NULL;
  if (size) {
    data = (rosapi__srv__MessageDetails_Response *)calloc(size, sizeof(rosapi__srv__MessageDetails_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosapi__srv__MessageDetails_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosapi__srv__MessageDetails_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rosapi__srv__MessageDetails_Response__Sequence__fini(rosapi__srv__MessageDetails_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosapi__srv__MessageDetails_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rosapi__srv__MessageDetails_Response__Sequence *
rosapi__srv__MessageDetails_Response__Sequence__create(size_t size)
{
  rosapi__srv__MessageDetails_Response__Sequence * array = (rosapi__srv__MessageDetails_Response__Sequence *)malloc(sizeof(rosapi__srv__MessageDetails_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosapi__srv__MessageDetails_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosapi__srv__MessageDetails_Response__Sequence__destroy(rosapi__srv__MessageDetails_Response__Sequence * array)
{
  if (array) {
    rosapi__srv__MessageDetails_Response__Sequence__fini(array);
  }
  free(array);
}
