// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from recordreplay_planner_actions:action/ReplayTrajectory.idl
// generated code does not contain a copyright notice
#include "recordreplay_planner_actions/action/detail/replay_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `replay_path`
#include "rosidl_runtime_c/string_functions.h"

bool
recordreplay_planner_actions__action__ReplayTrajectory_Goal__init(recordreplay_planner_actions__action__ReplayTrajectory_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // replay_path
  if (!rosidl_runtime_c__String__init(&msg->replay_path)) {
    recordreplay_planner_actions__action__ReplayTrajectory_Goal__fini(msg);
    return false;
  }
  return true;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_Goal__fini(recordreplay_planner_actions__action__ReplayTrajectory_Goal * msg)
{
  if (!msg) {
    return;
  }
  // replay_path
  rosidl_runtime_c__String__fini(&msg->replay_path);
}

recordreplay_planner_actions__action__ReplayTrajectory_Goal *
recordreplay_planner_actions__action__ReplayTrajectory_Goal__create()
{
  recordreplay_planner_actions__action__ReplayTrajectory_Goal * msg = (recordreplay_planner_actions__action__ReplayTrajectory_Goal *)malloc(sizeof(recordreplay_planner_actions__action__ReplayTrajectory_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(recordreplay_planner_actions__action__ReplayTrajectory_Goal));
  bool success = recordreplay_planner_actions__action__ReplayTrajectory_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_Goal__destroy(recordreplay_planner_actions__action__ReplayTrajectory_Goal * msg)
{
  if (msg) {
    recordreplay_planner_actions__action__ReplayTrajectory_Goal__fini(msg);
  }
  free(msg);
}


bool
recordreplay_planner_actions__action__ReplayTrajectory_Goal__Sequence__init(recordreplay_planner_actions__action__ReplayTrajectory_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  recordreplay_planner_actions__action__ReplayTrajectory_Goal * data = NULL;
  if (size) {
    data = (recordreplay_planner_actions__action__ReplayTrajectory_Goal *)calloc(size, sizeof(recordreplay_planner_actions__action__ReplayTrajectory_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = recordreplay_planner_actions__action__ReplayTrajectory_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        recordreplay_planner_actions__action__ReplayTrajectory_Goal__fini(&data[i - 1]);
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
recordreplay_planner_actions__action__ReplayTrajectory_Goal__Sequence__fini(recordreplay_planner_actions__action__ReplayTrajectory_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      recordreplay_planner_actions__action__ReplayTrajectory_Goal__fini(&array->data[i]);
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

recordreplay_planner_actions__action__ReplayTrajectory_Goal__Sequence *
recordreplay_planner_actions__action__ReplayTrajectory_Goal__Sequence__create(size_t size)
{
  recordreplay_planner_actions__action__ReplayTrajectory_Goal__Sequence * array = (recordreplay_planner_actions__action__ReplayTrajectory_Goal__Sequence *)malloc(sizeof(recordreplay_planner_actions__action__ReplayTrajectory_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = recordreplay_planner_actions__action__ReplayTrajectory_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_Goal__Sequence__destroy(recordreplay_planner_actions__action__ReplayTrajectory_Goal__Sequence * array)
{
  if (array) {
    recordreplay_planner_actions__action__ReplayTrajectory_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
recordreplay_planner_actions__action__ReplayTrajectory_Result__init(recordreplay_planner_actions__action__ReplayTrajectory_Result * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_Result__fini(recordreplay_planner_actions__action__ReplayTrajectory_Result * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

recordreplay_planner_actions__action__ReplayTrajectory_Result *
recordreplay_planner_actions__action__ReplayTrajectory_Result__create()
{
  recordreplay_planner_actions__action__ReplayTrajectory_Result * msg = (recordreplay_planner_actions__action__ReplayTrajectory_Result *)malloc(sizeof(recordreplay_planner_actions__action__ReplayTrajectory_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(recordreplay_planner_actions__action__ReplayTrajectory_Result));
  bool success = recordreplay_planner_actions__action__ReplayTrajectory_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_Result__destroy(recordreplay_planner_actions__action__ReplayTrajectory_Result * msg)
{
  if (msg) {
    recordreplay_planner_actions__action__ReplayTrajectory_Result__fini(msg);
  }
  free(msg);
}


bool
recordreplay_planner_actions__action__ReplayTrajectory_Result__Sequence__init(recordreplay_planner_actions__action__ReplayTrajectory_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  recordreplay_planner_actions__action__ReplayTrajectory_Result * data = NULL;
  if (size) {
    data = (recordreplay_planner_actions__action__ReplayTrajectory_Result *)calloc(size, sizeof(recordreplay_planner_actions__action__ReplayTrajectory_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = recordreplay_planner_actions__action__ReplayTrajectory_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        recordreplay_planner_actions__action__ReplayTrajectory_Result__fini(&data[i - 1]);
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
recordreplay_planner_actions__action__ReplayTrajectory_Result__Sequence__fini(recordreplay_planner_actions__action__ReplayTrajectory_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      recordreplay_planner_actions__action__ReplayTrajectory_Result__fini(&array->data[i]);
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

recordreplay_planner_actions__action__ReplayTrajectory_Result__Sequence *
recordreplay_planner_actions__action__ReplayTrajectory_Result__Sequence__create(size_t size)
{
  recordreplay_planner_actions__action__ReplayTrajectory_Result__Sequence * array = (recordreplay_planner_actions__action__ReplayTrajectory_Result__Sequence *)malloc(sizeof(recordreplay_planner_actions__action__ReplayTrajectory_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = recordreplay_planner_actions__action__ReplayTrajectory_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_Result__Sequence__destroy(recordreplay_planner_actions__action__ReplayTrajectory_Result__Sequence * array)
{
  if (array) {
    recordreplay_planner_actions__action__ReplayTrajectory_Result__Sequence__fini(array);
  }
  free(array);
}


bool
recordreplay_planner_actions__action__ReplayTrajectory_Feedback__init(recordreplay_planner_actions__action__ReplayTrajectory_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // remaining_length
  return true;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_Feedback__fini(recordreplay_planner_actions__action__ReplayTrajectory_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // remaining_length
}

recordreplay_planner_actions__action__ReplayTrajectory_Feedback *
recordreplay_planner_actions__action__ReplayTrajectory_Feedback__create()
{
  recordreplay_planner_actions__action__ReplayTrajectory_Feedback * msg = (recordreplay_planner_actions__action__ReplayTrajectory_Feedback *)malloc(sizeof(recordreplay_planner_actions__action__ReplayTrajectory_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(recordreplay_planner_actions__action__ReplayTrajectory_Feedback));
  bool success = recordreplay_planner_actions__action__ReplayTrajectory_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_Feedback__destroy(recordreplay_planner_actions__action__ReplayTrajectory_Feedback * msg)
{
  if (msg) {
    recordreplay_planner_actions__action__ReplayTrajectory_Feedback__fini(msg);
  }
  free(msg);
}


bool
recordreplay_planner_actions__action__ReplayTrajectory_Feedback__Sequence__init(recordreplay_planner_actions__action__ReplayTrajectory_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  recordreplay_planner_actions__action__ReplayTrajectory_Feedback * data = NULL;
  if (size) {
    data = (recordreplay_planner_actions__action__ReplayTrajectory_Feedback *)calloc(size, sizeof(recordreplay_planner_actions__action__ReplayTrajectory_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = recordreplay_planner_actions__action__ReplayTrajectory_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        recordreplay_planner_actions__action__ReplayTrajectory_Feedback__fini(&data[i - 1]);
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
recordreplay_planner_actions__action__ReplayTrajectory_Feedback__Sequence__fini(recordreplay_planner_actions__action__ReplayTrajectory_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      recordreplay_planner_actions__action__ReplayTrajectory_Feedback__fini(&array->data[i]);
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

recordreplay_planner_actions__action__ReplayTrajectory_Feedback__Sequence *
recordreplay_planner_actions__action__ReplayTrajectory_Feedback__Sequence__create(size_t size)
{
  recordreplay_planner_actions__action__ReplayTrajectory_Feedback__Sequence * array = (recordreplay_planner_actions__action__ReplayTrajectory_Feedback__Sequence *)malloc(sizeof(recordreplay_planner_actions__action__ReplayTrajectory_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = recordreplay_planner_actions__action__ReplayTrajectory_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_Feedback__Sequence__destroy(recordreplay_planner_actions__action__ReplayTrajectory_Feedback__Sequence * array)
{
  if (array) {
    recordreplay_planner_actions__action__ReplayTrajectory_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "recordreplay_planner_actions/action/detail/replay_trajectory__functions.h"

bool
recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__init(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!recordreplay_planner_actions__action__ReplayTrajectory_Goal__init(&msg->goal)) {
    recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__fini(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  recordreplay_planner_actions__action__ReplayTrajectory_Goal__fini(&msg->goal);
}

recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request *
recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__create()
{
  recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request * msg = (recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request *)malloc(sizeof(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request));
  bool success = recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__destroy(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request * msg)
{
  if (msg) {
    recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__Sequence__init(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request * data = NULL;
  if (size) {
    data = (recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request *)calloc(size, sizeof(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__fini(&data[i - 1]);
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
recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__Sequence__fini(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__fini(&array->data[i]);
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

recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__Sequence *
recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__Sequence__create(size_t size)
{
  recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__Sequence * array = (recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__Sequence *)malloc(sizeof(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__Sequence__destroy(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__Sequence * array)
{
  if (array) {
    recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__init(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__fini(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response *
recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__create()
{
  recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response * msg = (recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response *)malloc(sizeof(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response));
  bool success = recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__destroy(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response * msg)
{
  if (msg) {
    recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__Sequence__init(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response * data = NULL;
  if (size) {
    data = (recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response *)calloc(size, sizeof(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__fini(&data[i - 1]);
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
recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__Sequence__fini(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__fini(&array->data[i]);
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

recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__Sequence *
recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__Sequence__create(size_t size)
{
  recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__Sequence * array = (recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__Sequence *)malloc(sizeof(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__Sequence__destroy(recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__Sequence * array)
{
  if (array) {
    recordreplay_planner_actions__action__ReplayTrajectory_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__init(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__fini(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request *
recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__create()
{
  recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request * msg = (recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request *)malloc(sizeof(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request));
  bool success = recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__destroy(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request * msg)
{
  if (msg) {
    recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__Sequence__init(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request * data = NULL;
  if (size) {
    data = (recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request *)calloc(size, sizeof(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__fini(&data[i - 1]);
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
recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__Sequence__fini(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__fini(&array->data[i]);
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

recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__Sequence *
recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__Sequence__create(size_t size)
{
  recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__Sequence * array = (recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__Sequence *)malloc(sizeof(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__Sequence__destroy(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__Sequence * array)
{
  if (array) {
    recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "recordreplay_planner_actions/action/detail/replay_trajectory__functions.h"

bool
recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__init(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!recordreplay_planner_actions__action__ReplayTrajectory_Result__init(&msg->result)) {
    recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__fini(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  recordreplay_planner_actions__action__ReplayTrajectory_Result__fini(&msg->result);
}

recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response *
recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__create()
{
  recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response * msg = (recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response *)malloc(sizeof(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response));
  bool success = recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__destroy(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response * msg)
{
  if (msg) {
    recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__Sequence__init(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response * data = NULL;
  if (size) {
    data = (recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response *)calloc(size, sizeof(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__fini(&data[i - 1]);
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
recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__Sequence__fini(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__fini(&array->data[i]);
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

recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__Sequence *
recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__Sequence__create(size_t size)
{
  recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__Sequence * array = (recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__Sequence *)malloc(sizeof(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__Sequence__destroy(recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__Sequence * array)
{
  if (array) {
    recordreplay_planner_actions__action__ReplayTrajectory_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "recordreplay_planner_actions/action/detail/replay_trajectory__functions.h"

bool
recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__init(recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!recordreplay_planner_actions__action__ReplayTrajectory_Feedback__init(&msg->feedback)) {
    recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__fini(recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  recordreplay_planner_actions__action__ReplayTrajectory_Feedback__fini(&msg->feedback);
}

recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage *
recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__create()
{
  recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage * msg = (recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage *)malloc(sizeof(recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage));
  bool success = recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__destroy(recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage * msg)
{
  if (msg) {
    recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__Sequence__init(recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage * data = NULL;
  if (size) {
    data = (recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage *)calloc(size, sizeof(recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__fini(&data[i - 1]);
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
recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__Sequence__fini(recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__fini(&array->data[i]);
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

recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__Sequence *
recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__Sequence__create(size_t size)
{
  recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__Sequence * array = (recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__Sequence *)malloc(sizeof(recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__Sequence__destroy(recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__Sequence * array)
{
  if (array) {
    recordreplay_planner_actions__action__ReplayTrajectory_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
