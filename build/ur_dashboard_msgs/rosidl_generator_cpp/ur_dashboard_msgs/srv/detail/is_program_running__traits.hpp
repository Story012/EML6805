// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_dashboard_msgs:srv/IsProgramRunning.idl
// generated code does not contain a copyright notice

#ifndef UR_DASHBOARD_MSGS__SRV__DETAIL__IS_PROGRAM_RUNNING__TRAITS_HPP_
#define UR_DASHBOARD_MSGS__SRV__DETAIL__IS_PROGRAM_RUNNING__TRAITS_HPP_

#include "ur_dashboard_msgs/srv/detail/is_program_running__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ur_dashboard_msgs::srv::IsProgramRunning_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ur_dashboard_msgs::srv::IsProgramRunning_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ur_dashboard_msgs::srv::IsProgramRunning_Request>()
{
  return "ur_dashboard_msgs::srv::IsProgramRunning_Request";
}

template<>
inline const char * name<ur_dashboard_msgs::srv::IsProgramRunning_Request>()
{
  return "ur_dashboard_msgs/srv/IsProgramRunning_Request";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::srv::IsProgramRunning_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::srv::IsProgramRunning_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur_dashboard_msgs::srv::IsProgramRunning_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ur_dashboard_msgs::srv::IsProgramRunning_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: answer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "answer: ";
    value_to_yaml(msg.answer, out);
    out << "\n";
  }

  // member: program_running
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "program_running: ";
    value_to_yaml(msg.program_running, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ur_dashboard_msgs::srv::IsProgramRunning_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ur_dashboard_msgs::srv::IsProgramRunning_Response>()
{
  return "ur_dashboard_msgs::srv::IsProgramRunning_Response";
}

template<>
inline const char * name<ur_dashboard_msgs::srv::IsProgramRunning_Response>()
{
  return "ur_dashboard_msgs/srv/IsProgramRunning_Response";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::srv::IsProgramRunning_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_dashboard_msgs::srv::IsProgramRunning_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur_dashboard_msgs::srv::IsProgramRunning_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur_dashboard_msgs::srv::IsProgramRunning>()
{
  return "ur_dashboard_msgs::srv::IsProgramRunning";
}

template<>
inline const char * name<ur_dashboard_msgs::srv::IsProgramRunning>()
{
  return "ur_dashboard_msgs/srv/IsProgramRunning";
}

template<>
struct has_fixed_size<ur_dashboard_msgs::srv::IsProgramRunning>
  : std::integral_constant<
    bool,
    has_fixed_size<ur_dashboard_msgs::srv::IsProgramRunning_Request>::value &&
    has_fixed_size<ur_dashboard_msgs::srv::IsProgramRunning_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur_dashboard_msgs::srv::IsProgramRunning>
  : std::integral_constant<
    bool,
    has_bounded_size<ur_dashboard_msgs::srv::IsProgramRunning_Request>::value &&
    has_bounded_size<ur_dashboard_msgs::srv::IsProgramRunning_Response>::value
  >
{
};

template<>
struct is_service<ur_dashboard_msgs::srv::IsProgramRunning>
  : std::true_type
{
};

template<>
struct is_service_request<ur_dashboard_msgs::srv::IsProgramRunning_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur_dashboard_msgs::srv::IsProgramRunning_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UR_DASHBOARD_MSGS__SRV__DETAIL__IS_PROGRAM_RUNNING__TRAITS_HPP_
