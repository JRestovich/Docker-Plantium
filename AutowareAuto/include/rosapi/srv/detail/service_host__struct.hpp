// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosapi:srv/ServiceHost.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SERVICE_HOST__STRUCT_HPP_
#define ROSAPI__SRV__DETAIL__SERVICE_HOST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rosapi__srv__ServiceHost_Request __attribute__((deprecated))
#else
# define DEPRECATED__rosapi__srv__ServiceHost_Request __declspec(deprecated)
#endif

namespace rosapi
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServiceHost_Request_
{
  using Type = ServiceHost_Request_<ContainerAllocator>;

  explicit ServiceHost_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service = "";
    }
  }

  explicit ServiceHost_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service = "";
    }
  }

  // field types and members
  using _service_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _service_type service;

  // setters for named parameter idiom
  Type & set__service(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->service = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosapi::srv::ServiceHost_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi::srv::ServiceHost_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi::srv::ServiceHost_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi::srv::ServiceHost_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::ServiceHost_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::ServiceHost_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::ServiceHost_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::ServiceHost_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi::srv::ServiceHost_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi::srv::ServiceHost_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi__srv__ServiceHost_Request
    std::shared_ptr<rosapi::srv::ServiceHost_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi__srv__ServiceHost_Request
    std::shared_ptr<rosapi::srv::ServiceHost_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceHost_Request_ & other) const
  {
    if (this->service != other.service) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceHost_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceHost_Request_

// alias to use template instance with default allocator
using ServiceHost_Request =
  rosapi::srv::ServiceHost_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosapi


#ifndef _WIN32
# define DEPRECATED__rosapi__srv__ServiceHost_Response __attribute__((deprecated))
#else
# define DEPRECATED__rosapi__srv__ServiceHost_Response __declspec(deprecated)
#endif

namespace rosapi
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServiceHost_Response_
{
  using Type = ServiceHost_Response_<ContainerAllocator>;

  explicit ServiceHost_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->host = "";
    }
  }

  explicit ServiceHost_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : host(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->host = "";
    }
  }

  // field types and members
  using _host_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _host_type host;

  // setters for named parameter idiom
  Type & set__host(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->host = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosapi::srv::ServiceHost_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi::srv::ServiceHost_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi::srv::ServiceHost_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi::srv::ServiceHost_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::ServiceHost_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::ServiceHost_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::ServiceHost_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::ServiceHost_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi::srv::ServiceHost_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi::srv::ServiceHost_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi__srv__ServiceHost_Response
    std::shared_ptr<rosapi::srv::ServiceHost_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi__srv__ServiceHost_Response
    std::shared_ptr<rosapi::srv::ServiceHost_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceHost_Response_ & other) const
  {
    if (this->host != other.host) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceHost_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceHost_Response_

// alias to use template instance with default allocator
using ServiceHost_Response =
  rosapi::srv::ServiceHost_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosapi

namespace rosapi
{

namespace srv
{

struct ServiceHost
{
  using Request = rosapi::srv::ServiceHost_Request;
  using Response = rosapi::srv::ServiceHost_Response;
};

}  // namespace srv

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__SERVICE_HOST__STRUCT_HPP_
