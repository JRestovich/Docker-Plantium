// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosapi:srv/NodeDetails.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__NODE_DETAILS__STRUCT_HPP_
#define ROSAPI__SRV__DETAIL__NODE_DETAILS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rosapi__srv__NodeDetails_Request __attribute__((deprecated))
#else
# define DEPRECATED__rosapi__srv__NodeDetails_Request __declspec(deprecated)
#endif

namespace rosapi
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NodeDetails_Request_
{
  using Type = NodeDetails_Request_<ContainerAllocator>;

  explicit NodeDetails_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node = "";
    }
  }

  explicit NodeDetails_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node = "";
    }
  }

  // field types and members
  using _node_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _node_type node;

  // setters for named parameter idiom
  Type & set__node(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->node = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosapi::srv::NodeDetails_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi::srv::NodeDetails_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi::srv::NodeDetails_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi::srv::NodeDetails_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::NodeDetails_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::NodeDetails_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::NodeDetails_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::NodeDetails_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi::srv::NodeDetails_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi::srv::NodeDetails_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi__srv__NodeDetails_Request
    std::shared_ptr<rosapi::srv::NodeDetails_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi__srv__NodeDetails_Request
    std::shared_ptr<rosapi::srv::NodeDetails_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeDetails_Request_ & other) const
  {
    if (this->node != other.node) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeDetails_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeDetails_Request_

// alias to use template instance with default allocator
using NodeDetails_Request =
  rosapi::srv::NodeDetails_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosapi


#ifndef _WIN32
# define DEPRECATED__rosapi__srv__NodeDetails_Response __attribute__((deprecated))
#else
# define DEPRECATED__rosapi__srv__NodeDetails_Response __declspec(deprecated)
#endif

namespace rosapi
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NodeDetails_Response_
{
  using Type = NodeDetails_Response_<ContainerAllocator>;

  explicit NodeDetails_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit NodeDetails_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _subscribing_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _subscribing_type subscribing;
  using _publishing_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _publishing_type publishing;
  using _services_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _services_type services;

  // setters for named parameter idiom
  Type & set__subscribing(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->subscribing = _arg;
    return *this;
  }
  Type & set__publishing(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->publishing = _arg;
    return *this;
  }
  Type & set__services(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->services = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosapi::srv::NodeDetails_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi::srv::NodeDetails_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi::srv::NodeDetails_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi::srv::NodeDetails_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::NodeDetails_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::NodeDetails_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::NodeDetails_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::NodeDetails_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi::srv::NodeDetails_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi::srv::NodeDetails_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi__srv__NodeDetails_Response
    std::shared_ptr<rosapi::srv::NodeDetails_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi__srv__NodeDetails_Response
    std::shared_ptr<rosapi::srv::NodeDetails_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeDetails_Response_ & other) const
  {
    if (this->subscribing != other.subscribing) {
      return false;
    }
    if (this->publishing != other.publishing) {
      return false;
    }
    if (this->services != other.services) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeDetails_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeDetails_Response_

// alias to use template instance with default allocator
using NodeDetails_Response =
  rosapi::srv::NodeDetails_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosapi

namespace rosapi
{

namespace srv
{

struct NodeDetails
{
  using Request = rosapi::srv::NodeDetails_Request;
  using Response = rosapi::srv::NodeDetails_Response;
};

}  // namespace srv

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__NODE_DETAILS__STRUCT_HPP_
