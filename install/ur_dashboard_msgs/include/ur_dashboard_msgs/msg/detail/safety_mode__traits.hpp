// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_dashboard_msgs:msg/SafetyMode.idl
// generated code does not contain a copyright notice

#ifndef UR_DASHBOARD_MSGS__MSG__DETAIL__SAFETY_MODE__TRAITS_HPP_
#define UR_DASHBOARD_MSGS__MSG__DETAIL__SAFETY_MODE__TRAITS_HPP_

#include "ur_dashboard_msgs/msg/detail/safety_mode__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ur_dashboard_msgs::msg::SafetyMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ur_dashboard_msgs::msg::SafetyMode & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ur_dashboard_msgs::msg::SafetyMode>()
{
  return "ur_dashboard_msgs::msg::SafetyMode";
}

template<>
inline const char * name<ur_dashboard_msgs::msg::SafetyMode>()
{
  return "ur_dashboard_msgs/msg/SafetyMode";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::msg::SafetyMode>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::msg::SafetyMode>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur_dashboard_msgs::msg::SafetyMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UR_DASHBOARD_MSGS__MSG__DETAIL__SAFETY_MODE__TRAITS_HPP_
