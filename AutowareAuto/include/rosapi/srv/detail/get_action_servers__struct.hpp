// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosapi:srv/GetActionServers.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__GET_ACTION_SERVERS__STRUCT_HPP_
#define ROSAPI__SRV__DETAIL__GET_ACTION_SERVERS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rosapi__srv__GetActionServers_Request __attribute__((deprecated))
#else
# define DEPRECATED__rosapi__srv__GetActionServers_Request __declspec(deprecated)
#endif

namespace rosapi
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetActionServers_Request_
{
  using Type = GetActionServers_Request_<ContainerAllocator>;

  explicit GetActionServers_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetActionServers_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    rosapi::srv::GetActionServers_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi::srv::GetActionServers_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi::srv::GetActionServers_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi::srv::GetActionServers_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::GetActionServers_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::GetActionServers_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::GetActionServers_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::GetActionServers_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi::srv::GetActionServers_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi::srv::GetActionServers_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi__srv__GetActionServers_Request
    std::shared_ptr<rosapi::srv::GetActionServers_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi__srv__GetActionServers_Request
    std::shared_ptr<rosapi::srv::GetActionServers_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetActionServers_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetActionServers_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetActionServers_Request_

// alias to use template instance with default allocator
using GetActionServers_Request =
  rosapi::srv::GetActionServers_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosapi


#ifndef _WIN32
# define DEPRECATED__rosapi__srv__GetActionServers_Response __attribute__((deprecated))
#else
# define DEPRECATED__rosapi__srv__GetActionServers_Response __declspec(deprecated)
#endif

namespace rosapi
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetActionServers_Response_
{
  using Type = GetActionServers_Response_<ContainerAllocator>;

  explicit GetActionServers_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetActionServers_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _action_servers_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _action_servers_type action_servers;

  // setters for named parameter idiom
  Type & set__action_servers(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->action_servers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosapi::srv::GetActionServers_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi::srv::GetActionServers_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi::srv::GetActionServers_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi::srv::GetActionServers_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::GetActionServers_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::GetActionServers_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::GetActionServers_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::GetActionServers_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi::srv::GetActionServers_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi::srv::GetActionServers_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi__srv__GetActionServers_Response
    std::shared_ptr<rosapi::srv::GetActionServers_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi__srv__GetActionServers_Response
    std::shared_ptr<rosapi::srv::GetActionServers_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetActionServers_Response_ & other) const
  {
    if (this->action_servers != other.action_servers) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetActionServers_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetActionServers_Response_

// alias to use template instance with default allocator
using GetActionServers_Response =
  rosapi::srv::GetActionServers_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosapi

namespace rosapi
{

namespace srv
{

struct GetActionServers
{
  using Request = rosapi::srv::GetActionServers_Request;
  using Response = rosapi::srv::GetActionServers_Response;
};

}  // namespace srv

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__GET_ACTION_SERVERS__STRUCT_HPP_
