// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from recordreplay_planner_actions:action/RecordTrajectory.idl
// generated code does not contain a copyright notice

#ifndef RECORDREPLAY_PLANNER_ACTIONS__ACTION__DETAIL__RECORD_TRAJECTORY__TRAITS_HPP_
#define RECORDREPLAY_PLANNER_ACTIONS__ACTION__DETAIL__RECORD_TRAJECTORY__TRAITS_HPP_

#include "recordreplay_planner_actions/action/detail/record_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<recordreplay_planner_actions::action::RecordTrajectory_Goal>()
{
  return "recordreplay_planner_actions::action::RecordTrajectory_Goal";
}

template<>
inline const char * name<recordreplay_planner_actions::action::RecordTrajectory_Goal>()
{
  return "recordreplay_planner_actions/action/RecordTrajectory_Goal";
}

template<>
struct has_fixed_size<recordreplay_planner_actions::action::RecordTrajectory_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<recordreplay_planner_actions::action::RecordTrajectory_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<recordreplay_planner_actions::action::RecordTrajectory_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<recordreplay_planner_actions::action::RecordTrajectory_Result>()
{
  return "recordreplay_planner_actions::action::RecordTrajectory_Result";
}

template<>
inline const char * name<recordreplay_planner_actions::action::RecordTrajectory_Result>()
{
  return "recordreplay_planner_actions/action/RecordTrajectory_Result";
}

template<>
struct has_fixed_size<recordreplay_planner_actions::action::RecordTrajectory_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<recordreplay_planner_actions::action::RecordTrajectory_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<recordreplay_planner_actions::action::RecordTrajectory_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<recordreplay_planner_actions::action::RecordTrajectory_Feedback>()
{
  return "recordreplay_planner_actions::action::RecordTrajectory_Feedback";
}

template<>
inline const char * name<recordreplay_planner_actions::action::RecordTrajectory_Feedback>()
{
  return "recordreplay_planner_actions/action/RecordTrajectory_Feedback";
}

template<>
struct has_fixed_size<recordreplay_planner_actions::action::RecordTrajectory_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<recordreplay_planner_actions::action::RecordTrajectory_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<recordreplay_planner_actions::action::RecordTrajectory_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "recordreplay_planner_actions/action/detail/record_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Request>()
{
  return "recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Request";
}

template<>
inline const char * name<recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Request>()
{
  return "recordreplay_planner_actions/action/RecordTrajectory_SendGoal_Request";
}

template<>
struct has_fixed_size<recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<recordreplay_planner_actions::action::RecordTrajectory_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<recordreplay_planner_actions::action::RecordTrajectory_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Response>()
{
  return "recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Response";
}

template<>
inline const char * name<recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Response>()
{
  return "recordreplay_planner_actions/action/RecordTrajectory_SendGoal_Response";
}

template<>
struct has_fixed_size<recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<recordreplay_planner_actions::action::RecordTrajectory_SendGoal>()
{
  return "recordreplay_planner_actions::action::RecordTrajectory_SendGoal";
}

template<>
inline const char * name<recordreplay_planner_actions::action::RecordTrajectory_SendGoal>()
{
  return "recordreplay_planner_actions/action/RecordTrajectory_SendGoal";
}

template<>
struct has_fixed_size<recordreplay_planner_actions::action::RecordTrajectory_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Request>::value &&
    has_fixed_size<recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<recordreplay_planner_actions::action::RecordTrajectory_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Request>::value &&
    has_bounded_size<recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<recordreplay_planner_actions::action::RecordTrajectory_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<recordreplay_planner_actions::action::RecordTrajectory_GetResult_Request>()
{
  return "recordreplay_planner_actions::action::RecordTrajectory_GetResult_Request";
}

template<>
inline const char * name<recordreplay_planner_actions::action::RecordTrajectory_GetResult_Request>()
{
  return "recordreplay_planner_actions/action/RecordTrajectory_GetResult_Request";
}

template<>
struct has_fixed_size<recordreplay_planner_actions::action::RecordTrajectory_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<recordreplay_planner_actions::action::RecordTrajectory_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<recordreplay_planner_actions::action::RecordTrajectory_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "recordreplay_planner_actions/action/detail/record_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<recordreplay_planner_actions::action::RecordTrajectory_GetResult_Response>()
{
  return "recordreplay_planner_actions::action::RecordTrajectory_GetResult_Response";
}

template<>
inline const char * name<recordreplay_planner_actions::action::RecordTrajectory_GetResult_Response>()
{
  return "recordreplay_planner_actions/action/RecordTrajectory_GetResult_Response";
}

template<>
struct has_fixed_size<recordreplay_planner_actions::action::RecordTrajectory_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<recordreplay_planner_actions::action::RecordTrajectory_Result>::value> {};

template<>
struct has_bounded_size<recordreplay_planner_actions::action::RecordTrajectory_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<recordreplay_planner_actions::action::RecordTrajectory_Result>::value> {};

template<>
struct is_message<recordreplay_planner_actions::action::RecordTrajectory_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<recordreplay_planner_actions::action::RecordTrajectory_GetResult>()
{
  return "recordreplay_planner_actions::action::RecordTrajectory_GetResult";
}

template<>
inline const char * name<recordreplay_planner_actions::action::RecordTrajectory_GetResult>()
{
  return "recordreplay_planner_actions/action/RecordTrajectory_GetResult";
}

template<>
struct has_fixed_size<recordreplay_planner_actions::action::RecordTrajectory_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<recordreplay_planner_actions::action::RecordTrajectory_GetResult_Request>::value &&
    has_fixed_size<recordreplay_planner_actions::action::RecordTrajectory_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<recordreplay_planner_actions::action::RecordTrajectory_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<recordreplay_planner_actions::action::RecordTrajectory_GetResult_Request>::value &&
    has_bounded_size<recordreplay_planner_actions::action::RecordTrajectory_GetResult_Response>::value
  >
{
};

template<>
struct is_service<recordreplay_planner_actions::action::RecordTrajectory_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<recordreplay_planner_actions::action::RecordTrajectory_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<recordreplay_planner_actions::action::RecordTrajectory_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "recordreplay_planner_actions/action/detail/record_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<recordreplay_planner_actions::action::RecordTrajectory_FeedbackMessage>()
{
  return "recordreplay_planner_actions::action::RecordTrajectory_FeedbackMessage";
}

template<>
inline const char * name<recordreplay_planner_actions::action::RecordTrajectory_FeedbackMessage>()
{
  return "recordreplay_planner_actions/action/RecordTrajectory_FeedbackMessage";
}

template<>
struct has_fixed_size<recordreplay_planner_actions::action::RecordTrajectory_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<recordreplay_planner_actions::action::RecordTrajectory_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<recordreplay_planner_actions::action::RecordTrajectory_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<recordreplay_planner_actions::action::RecordTrajectory_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<recordreplay_planner_actions::action::RecordTrajectory_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<recordreplay_planner_actions::action::RecordTrajectory>
  : std::true_type
{
};

template<>
struct is_action_goal<recordreplay_planner_actions::action::RecordTrajectory_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<recordreplay_planner_actions::action::RecordTrajectory_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<recordreplay_planner_actions::action::RecordTrajectory_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // RECORDREPLAY_PLANNER_ACTIONS__ACTION__DETAIL__RECORD_TRAJECTORY__TRAITS_HPP_
