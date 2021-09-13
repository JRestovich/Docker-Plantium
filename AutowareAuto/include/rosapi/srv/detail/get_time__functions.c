// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosapi:srv/GetTime.idl
// generated code does not contain a copyright notice
#include "rosapi/srv/detail/get_time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
rosapi__srv__GetTime_Request__init(rosapi__srv__GetTime_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
rosapi__srv__GetTime_Request__fini(rosapi__srv__GetTime_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

rosapi__srv__GetTime_Request *
rosapi__srv__GetTime_Request__create()
{
  rosapi__srv__GetTime_Request * msg = (rosapi__srv__GetTime_Request *)malloc(sizeof(rosapi__srv__GetTime_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosapi__srv__GetTime_Request));
  bool success = rosapi__srv__GetTime_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosapi__srv__GetTime_Request__destroy(rosapi__srv__GetTime_Request * msg)
{
  if (msg) {
    rosapi__srv__GetTime_Request__fini(msg);
  }
  free(msg);
}


bool
rosapi__srv__GetTime_Request__Sequence__init(rosapi__srv__GetTime_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosapi__srv__GetTime_Request * data = NULL;
  if (size) {
    data = (rosapi__srv__GetTime_Request *)calloc(size, sizeof(rosapi__srv__GetTime_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosapi__srv__GetTime_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosapi__srv__GetTime_Request__fini(&data[i - 1]);
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
rosapi__srv__GetTime_Request__Sequence__fini(rosapi__srv__GetTime_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosapi__srv__GetTime_Request__fini(&array->data[i]);
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

rosapi__srv__GetTime_Request__Sequence *
rosapi__srv__GetTime_Request__Sequence__create(size_t size)
{
  rosapi__srv__GetTime_Request__Sequence * array = (rosapi__srv__GetTime_Request__Sequence *)malloc(sizeof(rosapi__srv__GetTime_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosapi__srv__GetTime_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosapi__srv__GetTime_Request__Sequence__destroy(rosapi__srv__GetTime_Request__Sequence * array)
{
  if (array) {
    rosapi__srv__GetTime_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rosapi__srv__GetTime_Response__init(rosapi__srv__GetTime_Response * msg)
{
  if (!msg) {
    return false;
  }
  // time
  if (!builtin_interfaces__msg__Time__init(&msg->time)) {
    rosapi__srv__GetTime_Response__fini(msg);
    return false;
  }
  return true;
}

void
rosapi__srv__GetTime_Response__fini(rosapi__srv__GetTime_Response * msg)
{
  if (!msg) {
    return;
  }
  // time
  builtin_interfaces__msg__Time__fini(&msg->time);
}

rosapi__srv__GetTime_Response *
rosapi__srv__GetTime_Response__create()
{
  rosapi__srv__GetTime_Response * msg = (rosapi__srv__GetTime_Response *)malloc(sizeof(rosapi__srv__GetTime_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosapi__srv__GetTime_Response));
  bool success = rosapi__srv__GetTime_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosapi__srv__GetTime_Response__destroy(rosapi__srv__GetTime_Response * msg)
{
  if (msg) {
    rosapi__srv__GetTime_Response__fini(msg);
  }
  free(msg);
}


bool
rosapi__srv__GetTime_Response__Sequence__init(rosapi__srv__GetTime_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosapi__srv__GetTime_Response * data = NULL;
  if (size) {
    data = (rosapi__srv__GetTime_Response *)calloc(size, sizeof(rosapi__srv__GetTime_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosapi__srv__GetTime_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosapi__srv__GetTime_Response__fini(&data[i - 1]);
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
rosapi__srv__GetTime_Response__Sequence__fini(rosapi__srv__GetTime_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosapi__srv__GetTime_Response__fini(&array->data[i]);
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

rosapi__srv__GetTime_Response__Sequence *
rosapi__srv__GetTime_Response__Sequence__create(size_t size)
{
  rosapi__srv__GetTime_Response__Sequence * array = (rosapi__srv__GetTime_Response__Sequence *)malloc(sizeof(rosapi__srv__GetTime_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosapi__srv__GetTime_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosapi__srv__GetTime_Response__Sequence__destroy(rosapi__srv__GetTime_Response__Sequence * array)
{
  if (array) {
    rosapi__srv__GetTime_Response__Sequence__fini(array);
  }
  free(array);
}
