// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from recordreplay_planner_actions:action/RecordTrajectory.idl
// generated code does not contain a copyright notice

#ifndef RECORDREPLAY_PLANNER_ACTIONS__ACTION__DETAIL__RECORD_TRAJECTORY__BUILDER_HPP_
#define RECORDREPLAY_PLANNER_ACTIONS__ACTION__DETAIL__RECORD_TRAJECTORY__BUILDER_HPP_

#include "recordreplay_planner_actions/action/detail/record_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace recordreplay_planner_actions
{

namespace action
{

namespace builder
{

class Init_RecordTrajectory_Goal_record_path
{
public:
  Init_RecordTrajectory_Goal_record_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::recordreplay_planner_actions::action::RecordTrajectory_Goal record_path(::recordreplay_planner_actions::action::RecordTrajectory_Goal::_record_path_type arg)
  {
    msg_.record_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::recordreplay_planner_actions::action::RecordTrajectory_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::recordreplay_planner_actions::action::RecordTrajectory_Goal>()
{
  return recordreplay_planner_actions::action::builder::Init_RecordTrajectory_Goal_record_path();
}

}  // namespace recordreplay_planner_actions


namespace recordreplay_planner_actions
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::recordreplay_planner_actions::action::RecordTrajectory_Result>()
{
  return ::recordreplay_planner_actions::action::RecordTrajectory_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace recordreplay_planner_actions


namespace recordreplay_planner_actions
{

namespace action
{

namespace builder
{

class Init_RecordTrajectory_Feedback_current_length
{
public:
  Init_RecordTrajectory_Feedback_current_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::recordreplay_planner_actions::action::RecordTrajectory_Feedback current_length(::recordreplay_planner_actions::action::RecordTrajectory_Feedback::_current_length_type arg)
  {
    msg_.current_length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::recordreplay_planner_actions::action::RecordTrajectory_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::recordreplay_planner_actions::action::RecordTrajectory_Feedback>()
{
  return recordreplay_planner_actions::action::builder::Init_RecordTrajectory_Feedback_current_length();
}

}  // namespace recordreplay_planner_actions


namespace recordreplay_planner_actions
{

namespace action
{

namespace builder
{

class Init_RecordTrajectory_SendGoal_Request_goal
{
public:
  explicit Init_RecordTrajectory_SendGoal_Request_goal(::recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Request goal(::recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Request msg_;
};

class Init_RecordTrajectory_SendGoal_Request_goal_id
{
public:
  Init_RecordTrajectory_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordTrajectory_SendGoal_Request_goal goal_id(::recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RecordTrajectory_SendGoal_Request_goal(msg_);
  }

private:
  ::recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Request>()
{
  return recordreplay_planner_actions::action::builder::Init_RecordTrajectory_SendGoal_Request_goal_id();
}

}  // namespace recordreplay_planner_actions


namespace recordreplay_planner_actions
{

namespace action
{

namespace builder
{

class Init_RecordTrajectory_SendGoal_Response_stamp
{
public:
  explicit Init_RecordTrajectory_SendGoal_Response_stamp(::recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Response stamp(::recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Response msg_;
};

class Init_RecordTrajectory_SendGoal_Response_accepted
{
public:
  Init_RecordTrajectory_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordTrajectory_SendGoal_Response_stamp accepted(::recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RecordTrajectory_SendGoal_Response_stamp(msg_);
  }

private:
  ::recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::recordreplay_planner_actions::action::RecordTrajectory_SendGoal_Response>()
{
  return recordreplay_planner_actions::action::builder::Init_RecordTrajectory_SendGoal_Response_accepted();
}

}  // namespace recordreplay_planner_actions


namespace recordreplay_planner_actions
{

namespace action
{

namespace builder
{

class Init_RecordTrajectory_GetResult_Request_goal_id
{
public:
  Init_RecordTrajectory_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::recordreplay_planner_actions::action::RecordTrajectory_GetResult_Request goal_id(::recordreplay_planner_actions::action::RecordTrajectory_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::recordreplay_planner_actions::action::RecordTrajectory_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::recordreplay_planner_actions::action::RecordTrajectory_GetResult_Request>()
{
  return recordreplay_planner_actions::action::builder::Init_RecordTrajectory_GetResult_Request_goal_id();
}

}  // namespace recordreplay_planner_actions


namespace recordreplay_planner_actions
{

namespace action
{

namespace builder
{

class Init_RecordTrajectory_GetResult_Response_result
{
public:
  explicit Init_RecordTrajectory_GetResult_Response_result(::recordreplay_planner_actions::action::RecordTrajectory_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::recordreplay_planner_actions::action::RecordTrajectory_GetResult_Response result(::recordreplay_planner_actions::action::RecordTrajectory_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::recordreplay_planner_actions::action::RecordTrajectory_GetResult_Response msg_;
};

class Init_RecordTrajectory_GetResult_Response_status
{
public:
  Init_RecordTrajectory_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordTrajectory_GetResult_Response_result status(::recordreplay_planner_actions::action::RecordTrajectory_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RecordTrajectory_GetResult_Response_result(msg_);
  }

private:
  ::recordreplay_planner_actions::action::RecordTrajectory_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::recordreplay_planner_actions::action::RecordTrajectory_GetResult_Response>()
{
  return recordreplay_planner_actions::action::builder::Init_RecordTrajectory_GetResult_Response_status();
}

}  // namespace recordreplay_planner_actions


namespace recordreplay_planner_actions
{

namespace action
{

namespace builder
{

class Init_RecordTrajectory_FeedbackMessage_feedback
{
public:
  explicit Init_RecordTrajectory_FeedbackMessage_feedback(::recordreplay_planner_actions::action::RecordTrajectory_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::recordreplay_planner_actions::action::RecordTrajectory_FeedbackMessage feedback(::recordreplay_planner_actions::action::RecordTrajectory_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::recordreplay_planner_actions::action::RecordTrajectory_FeedbackMessage msg_;
};

class Init_RecordTrajectory_FeedbackMessage_goal_id
{
public:
  Init_RecordTrajectory_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordTrajectory_FeedbackMessage_feedback goal_id(::recordreplay_planner_actions::action::RecordTrajectory_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RecordTrajectory_FeedbackMessage_feedback(msg_);
  }

private:
  ::recordreplay_planner_actions::action::RecordTrajectory_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::recordreplay_planner_actions::action::RecordTrajectory_FeedbackMessage>()
{
  return recordreplay_planner_actions::action::builder::Init_RecordTrajectory_FeedbackMessage_goal_id();
}

}  // namespace recordreplay_planner_actions

#endif  // RECORDREPLAY_PLANNER_ACTIONS__ACTION__DETAIL__RECORD_TRAJECTORY__BUILDER_HPP_
