// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from open_space_msg:msg/OpenSpace.idl
// generated code does not contain a copyright notice

#ifndef OPEN_SPACE_MSG__MSG__DETAIL__OPEN_SPACE__TRAITS_HPP_
#define OPEN_SPACE_MSG__MSG__DETAIL__OPEN_SPACE__TRAITS_HPP_

#include "open_space_msg/msg/detail/open_space__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<open_space_msg::msg::OpenSpace>()
{
  return "open_space_msg::msg::OpenSpace";
}

template<>
inline const char * name<open_space_msg::msg::OpenSpace>()
{
  return "open_space_msg/msg/OpenSpace";
}

template<>
struct has_fixed_size<open_space_msg::msg::OpenSpace>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<open_space_msg::msg::OpenSpace>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<open_space_msg::msg::OpenSpace>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPEN_SPACE_MSG__MSG__DETAIL__OPEN_SPACE__TRAITS_HPP_
