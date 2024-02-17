// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from open_space_msg:msg/OpenSpace.idl
// generated code does not contain a copyright notice

#ifndef OPEN_SPACE_MSG__MSG__DETAIL__OPEN_SPACE__BUILDER_HPP_
#define OPEN_SPACE_MSG__MSG__DETAIL__OPEN_SPACE__BUILDER_HPP_

#include "open_space_msg/msg/detail/open_space__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace open_space_msg
{

namespace msg
{

namespace builder
{

class Init_OpenSpace_distance
{
public:
  explicit Init_OpenSpace_distance(::open_space_msg::msg::OpenSpace & msg)
  : msg_(msg)
  {}
  ::open_space_msg::msg::OpenSpace distance(::open_space_msg::msg::OpenSpace::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::open_space_msg::msg::OpenSpace msg_;
};

class Init_OpenSpace_angle
{
public:
  Init_OpenSpace_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpenSpace_distance angle(::open_space_msg::msg::OpenSpace::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_OpenSpace_distance(msg_);
  }

private:
  ::open_space_msg::msg::OpenSpace msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::open_space_msg::msg::OpenSpace>()
{
  return open_space_msg::msg::builder::Init_OpenSpace_angle();
}

}  // namespace open_space_msg

#endif  // OPEN_SPACE_MSG__MSG__DETAIL__OPEN_SPACE__BUILDER_HPP_
