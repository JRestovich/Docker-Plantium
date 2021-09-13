// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosapi:srv/Publishers.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__PUBLISHERS__STRUCT_HPP_
#define ROSAPI__SRV__DETAIL__PUBLISHERS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rosapi__srv__Publishers_Request __attribute__((deprecated))
#else
# define DEPRECATED__rosapi__srv__Publishers_Request __declspec(deprecated)
#endif

namespace rosapi
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Publishers_Request_
{
  using Type = Publishers_Request_<ContainerAllocator>;

  explicit Publishers_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic = "";
    }
  }

  explicit Publishers_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic = "";
    }
  }

  // field types and members
  using _topic_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _topic_type topic;

  // setters for named parameter idiom
  Type & set__topic(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->topic = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosapi::srv::Publishers_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi::srv::Publishers_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi::srv::Publishers_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi::srv::Publishers_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::Publishers_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::Publishers_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::Publishers_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::Publishers_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi::srv::Publishers_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi::srv::Publishers_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi__srv__Publishers_Request
    std::shared_ptr<rosapi::srv::Publishers_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi__srv__Publishers_Request
    std::shared_ptr<rosapi::srv::Publishers_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Publishers_Request_ & other) const
  {
    if (this->topic != other.topic) {
      return false;
    }
    return true;
  }
  bool operator!=(const Publishers_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Publishers_Request_

// alias to use template instance with default allocator
using Publishers_Request =
  rosapi::srv::Publishers_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosapi


#ifndef _WIN32
# define DEPRECATED__rosapi__srv__Publishers_Response __attribute__((deprecated))
#else
# define DEPRECATED__rosapi__srv__Publishers_Response __declspec(deprecated)
#endif

namespace rosapi
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Publishers_Response_
{
  using Type = Publishers_Response_<ContainerAllocator>;

  explicit Publishers_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Publishers_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _publishers_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _publishers_type publishers;

  // setters for named parameter idiom
  Type & set__publishers(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->publishers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosapi::srv::Publishers_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi::srv::Publishers_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi::srv::Publishers_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi::srv::Publishers_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::Publishers_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::Publishers_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::Publishers_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::Publishers_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi::srv::Publishers_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi::srv::Publishers_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi__srv__Publishers_Response
    std::shared_ptr<rosapi::srv::Publishers_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi__srv__Publishers_Response
    std::shared_ptr<rosapi::srv::Publishers_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Publishers_Response_ & other) const
  {
    if (this->publishers != other.publishers) {
      return false;
    }
    return true;
  }
  bool operator!=(const Publishers_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Publishers_Response_

// alias to use template instance with default allocator
using Publishers_Response =
  rosapi::srv::Publishers_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosapi

namespace rosapi
{

namespace srv
{

struct Publishers
{
  using Request = rosapi::srv::Publishers_Request;
  using Response = rosapi::srv::Publishers_Response;
};

}  // namespace srv

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__PUBLISHERS__STRUCT_HPP_
