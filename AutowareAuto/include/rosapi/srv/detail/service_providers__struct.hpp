// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosapi:srv/ServiceProviders.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SERVICE_PROVIDERS__STRUCT_HPP_
#define ROSAPI__SRV__DETAIL__SERVICE_PROVIDERS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rosapi__srv__ServiceProviders_Request __attribute__((deprecated))
#else
# define DEPRECATED__rosapi__srv__ServiceProviders_Request __declspec(deprecated)
#endif

namespace rosapi
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServiceProviders_Request_
{
  using Type = ServiceProviders_Request_<ContainerAllocator>;

  explicit ServiceProviders_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service = "";
    }
  }

  explicit ServiceProviders_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    rosapi::srv::ServiceProviders_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi::srv::ServiceProviders_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi::srv::ServiceProviders_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi::srv::ServiceProviders_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::ServiceProviders_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::ServiceProviders_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::ServiceProviders_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::ServiceProviders_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi::srv::ServiceProviders_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi::srv::ServiceProviders_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi__srv__ServiceProviders_Request
    std::shared_ptr<rosapi::srv::ServiceProviders_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi__srv__ServiceProviders_Request
    std::shared_ptr<rosapi::srv::ServiceProviders_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceProviders_Request_ & other) const
  {
    if (this->service != other.service) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceProviders_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceProviders_Request_

// alias to use template instance with default allocator
using ServiceProviders_Request =
  rosapi::srv::ServiceProviders_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosapi


#ifndef _WIN32
# define DEPRECATED__rosapi__srv__ServiceProviders_Response __attribute__((deprecated))
#else
# define DEPRECATED__rosapi__srv__ServiceProviders_Response __declspec(deprecated)
#endif

namespace rosapi
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServiceProviders_Response_
{
  using Type = ServiceProviders_Response_<ContainerAllocator>;

  explicit ServiceProviders_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ServiceProviders_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _providers_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _providers_type providers;

  // setters for named parameter idiom
  Type & set__providers(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->providers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosapi::srv::ServiceProviders_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi::srv::ServiceProviders_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi::srv::ServiceProviders_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi::srv::ServiceProviders_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::ServiceProviders_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::ServiceProviders_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::ServiceProviders_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::ServiceProviders_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi::srv::ServiceProviders_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi::srv::ServiceProviders_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi__srv__ServiceProviders_Response
    std::shared_ptr<rosapi::srv::ServiceProviders_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi__srv__ServiceProviders_Response
    std::shared_ptr<rosapi::srv::ServiceProviders_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceProviders_Response_ & other) const
  {
    if (this->providers != other.providers) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceProviders_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceProviders_Response_

// alias to use template instance with default allocator
using ServiceProviders_Response =
  rosapi::srv::ServiceProviders_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosapi

namespace rosapi
{

namespace srv
{

struct ServiceProviders
{
  using Request = rosapi::srv::ServiceProviders_Request;
  using Response = rosapi::srv::ServiceProviders_Response;
};

}  // namespace srv

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__SERVICE_PROVIDERS__STRUCT_HPP_
