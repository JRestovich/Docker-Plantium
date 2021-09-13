// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from recordreplay_planner_actions:action/RecordTrajectory.idl
// generated code does not contain a copyright notice

#ifndef RECORDREPLAY_PLANNER_ACTIONS__ACTION__DETAIL__RECORD_TRAJECTORY__STRUCT_H_
#define RECORDREPLAY_PLANNER_ACTIONS__ACTION__DETAIL__RECORD_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'record_path'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/RecordTrajectory in the package recordreplay_planner_actions.
typedef struct recordreplay_planner_actions__action__RecordTrajectory_Goal
{
  rosidl_runtime_c__String record_path;
} recordreplay_planner_actions__action__RecordTrajectory_Goal;

// Struct for a sequence of recordreplay_planner_actions__action__RecordTrajectory_Goal.
typedef struct recordreplay_planner_actions__action__RecordTrajectory_Goal__Sequence
{
  recordreplay_planner_actions__action__RecordTrajectory_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} recordreplay_planner_actions__action__RecordTrajectory_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/RecordTrajectory in the package recordreplay_planner_actions.
typedef struct recordreplay_planner_actions__action__RecordTrajectory_Result
{
  uint8_t structure_needs_at_least_one_member;
} recordreplay_planner_actions__action__RecordTrajectory_Result;

// Struct for a sequence of recordreplay_planner_actions__action__RecordTrajectory_Result.
typedef struct recordreplay_planner_actions__action__RecordTrajectory_Result__Sequence
{
  recordreplay_planner_actions__action__RecordTrajectory_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} recordreplay_planner_actions__action__RecordTrajectory_Result__Sequence;


// Constants defined in the message

// Struct defined in action/RecordTrajectory in the package recordreplay_planner_actions.
typedef struct recordreplay_planner_actions__action__RecordTrajectory_Feedback
{
  int32_t current_length;
} recordreplay_planner_actions__action__RecordTrajectory_Feedback;

// Struct for a sequence of recordreplay_planner_actions__action__RecordTrajectory_Feedback.
typedef struct recordreplay_planner_actions__action__RecordTrajectory_Feedback__Sequence
{
  recordreplay_planner_actions__action__RecordTrajectory_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} recordreplay_planner_actions__action__RecordTrajectory_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "recordreplay_planner_actions/action/detail/record_trajectory__struct.h"

// Struct defined in action/RecordTrajectory in the package recordreplay_planner_actions.
typedef struct recordreplay_planner_actions__action__RecordTrajectory_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  recordreplay_planner_actions__action__RecordTrajectory_Goal goal;
} recordreplay_planner_actions__action__RecordTrajectory_SendGoal_Request;

// Struct for a sequence of recordreplay_planner_actions__action__RecordTrajectory_SendGoal_Request.
typedef struct recordreplay_planner_actions__action__RecordTrajectory_SendGoal_Request__Sequence
{
  recordreplay_planner_actions__action__RecordTrajectory_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} recordreplay_planner_actions__action__RecordTrajectory_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/RecordTrajectory in the package recordreplay_planner_actions.
typedef struct recordreplay_planner_actions__action__RecordTrajectory_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} recordreplay_planner_actions__action__RecordTrajectory_SendGoal_Response;

// Struct for a sequence of recordreplay_planner_actions__action__RecordTrajectory_SendGoal_Response.
typedef struct recordreplay_planner_actions__action__RecordTrajectory_SendGoal_Response__Sequence
{
  recordreplay_planner_actions__action__RecordTrajectory_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} recordreplay_planner_actions__action__RecordTrajectory_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/RecordTrajectory in the package recordreplay_planner_actions.
typedef struct recordreplay_planner_actions__action__RecordTrajectory_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} recordreplay_planner_actions__action__RecordTrajectory_GetResult_Request;

// Struct for a sequence of recordreplay_planner_actions__action__RecordTrajectory_GetResult_Request.
typedef struct recordreplay_planner_actions__action__RecordTrajectory_GetResult_Request__Sequence
{
  recordreplay_planner_actions__action__RecordTrajectory_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} recordreplay_planner_actions__action__RecordTrajectory_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "recordreplay_planner_actions/action/detail/record_trajectory__struct.h"

// Struct defined in action/RecordTrajectory in the package recordreplay_planner_actions.
typedef struct recordreplay_planner_actions__action__RecordTrajectory_GetResult_Response
{
  int8_t status;
  recordreplay_planner_actions__action__RecordTrajectory_Result result;
} recordreplay_planner_actions__action__RecordTrajectory_GetResult_Response;

// Struct for a sequence of recordreplay_planner_actions__action__RecordTrajectory_GetResult_Response.
typedef struct recordreplay_planner_actions__action__RecordTrajectory_GetResult_Response__Sequence
{
  recordreplay_planner_actions__action__RecordTrajectory_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} recordreplay_planner_actions__action__RecordTrajectory_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "recordreplay_planner_actions/action/detail/record_trajectory__struct.h"

// Struct defined in action/RecordTrajectory in the package recordreplay_planner_actions.
typedef struct recordreplay_planner_actions__action__RecordTrajectory_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  recordreplay_planner_actions__action__RecordTrajectory_Feedback feedback;
} recordreplay_planner_actions__action__RecordTrajectory_FeedbackMessage;

// Struct for a sequence of recordreplay_planner_actions__action__RecordTrajectory_FeedbackMessage.
typedef struct recordreplay_planner_actions__action__RecordTrajectory_FeedbackMessage__Sequence
{
  recordreplay_planner_actions__action__RecordTrajectory_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} recordreplay_planner_actions__action__RecordTrajectory_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RECORDREPLAY_PLANNER_ACTIONS__ACTION__DETAIL__RECORD_TRAJECTORY__STRUCT_H_
