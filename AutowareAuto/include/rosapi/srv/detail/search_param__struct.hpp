// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosapi:srv/SearchParam.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__SEARCH_PARAM__STRUCT_HPP_
#define ROSAPI__SRV__DETAIL__SEARCH_PARAM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rosapi__srv__SearchParam_Request __attribute__((deprecated))
#else
# define DEPRECATED__rosapi__srv__SearchParam_Request __declspec(deprecated)
#endif

namespace rosapi
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SearchParam_Request_
{
  using Type = SearchParam_Request_<ContainerAllocator>;

  explicit SearchParam_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit SearchParam_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosapi::srv::SearchParam_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi::srv::SearchParam_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi::srv::SearchParam_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi::srv::SearchParam_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::SearchParam_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::SearchParam_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::SearchParam_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::SearchParam_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi::srv::SearchParam_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi::srv::SearchParam_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi__srv__SearchParam_Request
    std::shared_ptr<rosapi::srv::SearchParam_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi__srv__SearchParam_Request
    std::shared_ptr<rosapi::srv::SearchParam_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SearchParam_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const SearchParam_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SearchParam_Request_

// alias to use template instance with default allocator
using SearchParam_Request =
  rosapi::srv::SearchParam_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosapi


#ifndef _WIN32
# define DEPRECATED__rosapi__srv__SearchParam_Response __attribute__((deprecated))
#else
# define DEPRECATED__rosapi__srv__SearchParam_Response __declspec(deprecated)
#endif

namespace rosapi
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SearchParam_Response_
{
  using Type = SearchParam_Response_<ContainerAllocator>;

  explicit SearchParam_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->global_name = "";
    }
  }

  explicit SearchParam_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : global_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->global_name = "";
    }
  }

  // field types and members
  using _global_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _global_name_type global_name;

  // setters for named parameter idiom
  Type & set__global_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->global_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosapi::srv::SearchParam_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosapi::srv::SearchParam_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosapi::srv::SearchParam_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosapi::srv::SearchParam_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::SearchParam_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::SearchParam_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosapi::srv::SearchParam_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosapi::srv::SearchParam_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosapi::srv::SearchParam_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosapi::srv::SearchParam_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosapi__srv__SearchParam_Response
    std::shared_ptr<rosapi::srv::SearchParam_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosapi__srv__SearchParam_Response
    std::shared_ptr<rosapi::srv::SearchParam_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SearchParam_Response_ & other) const
  {
    if (this->global_name != other.global_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const SearchParam_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SearchParam_Response_

// alias to use template instance with default allocator
using SearchParam_Response =
  rosapi::srv::SearchParam_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rosapi

namespace rosapi
{

namespace srv
{

struct SearchParam
{
  using Request = rosapi::srv::SearchParam_Request;
  using Response = rosapi::srv::SearchParam_Response;
};

}  // namespace srv

}  // namespace rosapi

#endif  // ROSAPI__SRV__DETAIL__SEARCH_PARAM__STRUCT_HPP_
