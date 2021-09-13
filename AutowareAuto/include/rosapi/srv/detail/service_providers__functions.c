// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosapi:srv/ServiceProviders.idl
// generated code does not contain a copyright notice
#include "rosapi/srv/detail/service_providers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `service`
#include "rosidl_runtime_c/string_functions.h"

bool
rosapi__srv__ServiceProviders_Request__init(rosapi__srv__ServiceProviders_Request * msg)
{
  if (!msg) {
    return false;
  }
  // service
  if (!rosidl_runtime_c__String__init(&msg->service)) {
    rosapi__srv__ServiceProviders_Request__fini(msg);
    return false;
  }
  return true;
}

void
rosapi__srv__ServiceProviders_Request__fini(rosapi__srv__ServiceProviders_Request * msg)
{
  if (!msg) {
    return;
  }
  // service
  rosidl_runtime_c__String__fini(&msg->service);
}

rosapi__srv__ServiceProviders_Request *
rosapi__srv__ServiceProviders_Request__create()
{
  rosapi__srv__ServiceProviders_Request * msg = (rosapi__srv__ServiceProviders_Request *)malloc(sizeof(rosapi__srv__ServiceProviders_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosapi__srv__ServiceProviders_Request));
  bool success = rosapi__srv__ServiceProviders_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosapi__srv__ServiceProviders_Request__destroy(rosapi__srv__ServiceProviders_Request * msg)
{
  if (msg) {
    rosapi__srv__ServiceProviders_Request__fini(msg);
  }
  free(msg);
}


bool
rosapi__srv__ServiceProviders_Request__Sequence__init(rosapi__srv__ServiceProviders_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosapi__srv__ServiceProviders_Request * data = NULL;
  if (size) {
    data = (rosapi__srv__ServiceProviders_Request *)calloc(size, sizeof(rosapi__srv__ServiceProviders_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosapi__srv__ServiceProviders_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosapi__srv__ServiceProviders_Request__fini(&data[i - 1]);
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
rosapi__srv__ServiceProviders_Request__Sequence__fini(rosapi__srv__ServiceProviders_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosapi__srv__ServiceProviders_Request__fini(&array->data[i]);
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

rosapi__srv__ServiceProviders_Request__Sequence *
rosapi__srv__ServiceProviders_Request__Sequence__create(size_t size)
{
  rosapi__srv__ServiceProviders_Request__Sequence * array = (rosapi__srv__ServiceProviders_Request__Sequence *)malloc(sizeof(rosapi__srv__ServiceProviders_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosapi__srv__ServiceProviders_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosapi__srv__ServiceProviders_Request__Sequence__destroy(rosapi__srv__ServiceProviders_Request__Sequence * array)
{
  if (array) {
    rosapi__srv__ServiceProviders_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `providers`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
rosapi__srv__ServiceProviders_Response__init(rosapi__srv__ServiceProviders_Response * msg)
{
  if (!msg) {
    return false;
  }
  // providers
  if (!rosidl_runtime_c__String__Sequence__init(&msg->providers, 0)) {
    rosapi__srv__ServiceProviders_Response__fini(msg);
    return false;
  }
  return true;
}

void
rosapi__srv__ServiceProviders_Response__fini(rosapi__srv__ServiceProviders_Response * msg)
{
  if (!msg) {
    return;
  }
  // providers
  rosidl_runtime_c__String__Sequence__fini(&msg->providers);
}

rosapi__srv__ServiceProviders_Response *
rosapi__srv__ServiceProviders_Response__create()
{
  rosapi__srv__ServiceProviders_Response * msg = (rosapi__srv__ServiceProviders_Response *)malloc(sizeof(rosapi__srv__ServiceProviders_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosapi__srv__ServiceProviders_Response));
  bool success = rosapi__srv__ServiceProviders_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosapi__srv__ServiceProviders_Response__destroy(rosapi__srv__ServiceProviders_Response * msg)
{
  if (msg) {
    rosapi__srv__ServiceProviders_Response__fini(msg);
  }
  free(msg);
}


bool
rosapi__srv__ServiceProviders_Response__Sequence__init(rosapi__srv__ServiceProviders_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosapi__srv__ServiceProviders_Response * data = NULL;
  if (size) {
    data = (rosapi__srv__ServiceProviders_Response *)calloc(size, sizeof(rosapi__srv__ServiceProviders_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosapi__srv__ServiceProviders_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosapi__srv__ServiceProviders_Response__fini(&data[i - 1]);
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
rosapi__srv__ServiceProviders_Response__Sequence__fini(rosapi__srv__ServiceProviders_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosapi__srv__ServiceProviders_Response__fini(&array->data[i]);
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

rosapi__srv__ServiceProviders_Response__Sequence *
rosapi__srv__ServiceProviders_Response__Sequence__create(size_t size)
{
  rosapi__srv__ServiceProviders_Response__Sequence * array = (rosapi__srv__ServiceProviders_Response__Sequence *)malloc(sizeof(rosapi__srv__ServiceProviders_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosapi__srv__ServiceProviders_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosapi__srv__ServiceProviders_Response__Sequence__destroy(rosapi__srv__ServiceProviders_Response__Sequence * array)
{
  if (array) {
    rosapi__srv__ServiceProviders_Response__Sequence__fini(array);
  }
  free(array);
}
