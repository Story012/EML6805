// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_dashboard_msgs:action/SetMode.idl
// generated code does not contain a copyright notice
#include "ur_dashboard_msgs/action/detail/set_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ur_dashboard_msgs__action__SetMode_Goal__init(ur_dashboard_msgs__action__SetMode_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_robot_mode
  // stop_program
  // play_program
  return true;
}

void
ur_dashboard_msgs__action__SetMode_Goal__fini(ur_dashboard_msgs__action__SetMode_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_robot_mode
  // stop_program
  // play_program
}

bool
ur_dashboard_msgs__action__SetMode_Goal__are_equal(const ur_dashboard_msgs__action__SetMode_Goal * lhs, const ur_dashboard_msgs__action__SetMode_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_robot_mode
  if (lhs->target_robot_mode != rhs->target_robot_mode) {
    return false;
  }
  // stop_program
  if (lhs->stop_program != rhs->stop_program) {
    return false;
  }
  // play_program
  if (lhs->play_program != rhs->play_program) {
    return false;
  }
  return true;
}

bool
ur_dashboard_msgs__action__SetMode_Goal__copy(
  const ur_dashboard_msgs__action__SetMode_Goal * input,
  ur_dashboard_msgs__action__SetMode_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target_robot_mode
  output->target_robot_mode = input->target_robot_mode;
  // stop_program
  output->stop_program = input->stop_program;
  // play_program
  output->play_program = input->play_program;
  return true;
}

ur_dashboard_msgs__action__SetMode_Goal *
ur_dashboard_msgs__action__SetMode_Goal__create()
{
  ur_dashboard_msgs__action__SetMode_Goal * msg = (ur_dashboard_msgs__action__SetMode_Goal *)malloc(sizeof(ur_dashboard_msgs__action__SetMode_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_dashboard_msgs__action__SetMode_Goal));
  bool success = ur_dashboard_msgs__action__SetMode_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_dashboard_msgs__action__SetMode_Goal__destroy(ur_dashboard_msgs__action__SetMode_Goal * msg)
{
  if (msg) {
    ur_dashboard_msgs__action__SetMode_Goal__fini(msg);
  }
  free(msg);
}


bool
ur_dashboard_msgs__action__SetMode_Goal__Sequence__init(ur_dashboard_msgs__action__SetMode_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_dashboard_msgs__action__SetMode_Goal * data = NULL;
  if (size) {
    data = (ur_dashboard_msgs__action__SetMode_Goal *)calloc(size, sizeof(ur_dashboard_msgs__action__SetMode_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_dashboard_msgs__action__SetMode_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_dashboard_msgs__action__SetMode_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ur_dashboard_msgs__action__SetMode_Goal__Sequence__fini(ur_dashboard_msgs__action__SetMode_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_dashboard_msgs__action__SetMode_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ur_dashboard_msgs__action__SetMode_Goal__Sequence *
ur_dashboard_msgs__action__SetMode_Goal__Sequence__create(size_t size)
{
  ur_dashboard_msgs__action__SetMode_Goal__Sequence * array = (ur_dashboard_msgs__action__SetMode_Goal__Sequence *)malloc(sizeof(ur_dashboard_msgs__action__SetMode_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_dashboard_msgs__action__SetMode_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_dashboard_msgs__action__SetMode_Goal__Sequence__destroy(ur_dashboard_msgs__action__SetMode_Goal__Sequence * array)
{
  if (array) {
    ur_dashboard_msgs__action__SetMode_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
ur_dashboard_msgs__action__SetMode_Goal__Sequence__are_equal(const ur_dashboard_msgs__action__SetMode_Goal__Sequence * lhs, const ur_dashboard_msgs__action__SetMode_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_dashboard_msgs__action__SetMode_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_dashboard_msgs__action__SetMode_Goal__Sequence__copy(
  const ur_dashboard_msgs__action__SetMode_Goal__Sequence * input,
  ur_dashboard_msgs__action__SetMode_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_dashboard_msgs__action__SetMode_Goal);
    ur_dashboard_msgs__action__SetMode_Goal * data =
      (ur_dashboard_msgs__action__SetMode_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_dashboard_msgs__action__SetMode_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ur_dashboard_msgs__action__SetMode_Goal__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur_dashboard_msgs__action__SetMode_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
ur_dashboard_msgs__action__SetMode_Result__init(ur_dashboard_msgs__action__SetMode_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    ur_dashboard_msgs__action__SetMode_Result__fini(msg);
    return false;
  }
  return true;
}

void
ur_dashboard_msgs__action__SetMode_Result__fini(ur_dashboard_msgs__action__SetMode_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
ur_dashboard_msgs__action__SetMode_Result__are_equal(const ur_dashboard_msgs__action__SetMode_Result * lhs, const ur_dashboard_msgs__action__SetMode_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
ur_dashboard_msgs__action__SetMode_Result__copy(
  const ur_dashboard_msgs__action__SetMode_Result * input,
  ur_dashboard_msgs__action__SetMode_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

ur_dashboard_msgs__action__SetMode_Result *
ur_dashboard_msgs__action__SetMode_Result__create()
{
  ur_dashboard_msgs__action__SetMode_Result * msg = (ur_dashboard_msgs__action__SetMode_Result *)malloc(sizeof(ur_dashboard_msgs__action__SetMode_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_dashboard_msgs__action__SetMode_Result));
  bool success = ur_dashboard_msgs__action__SetMode_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_dashboard_msgs__action__SetMode_Result__destroy(ur_dashboard_msgs__action__SetMode_Result * msg)
{
  if (msg) {
    ur_dashboard_msgs__action__SetMode_Result__fini(msg);
  }
  free(msg);
}


bool
ur_dashboard_msgs__action__SetMode_Result__Sequence__init(ur_dashboard_msgs__action__SetMode_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_dashboard_msgs__action__SetMode_Result * data = NULL;
  if (size) {
    data = (ur_dashboard_msgs__action__SetMode_Result *)calloc(size, sizeof(ur_dashboard_msgs__action__SetMode_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_dashboard_msgs__action__SetMode_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_dashboard_msgs__action__SetMode_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ur_dashboard_msgs__action__SetMode_Result__Sequence__fini(ur_dashboard_msgs__action__SetMode_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_dashboard_msgs__action__SetMode_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ur_dashboard_msgs__action__SetMode_Result__Sequence *
ur_dashboard_msgs__action__SetMode_Result__Sequence__create(size_t size)
{
  ur_dashboard_msgs__action__SetMode_Result__Sequence * array = (ur_dashboard_msgs__action__SetMode_Result__Sequence *)malloc(sizeof(ur_dashboard_msgs__action__SetMode_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_dashboard_msgs__action__SetMode_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_dashboard_msgs__action__SetMode_Result__Sequence__destroy(ur_dashboard_msgs__action__SetMode_Result__Sequence * array)
{
  if (array) {
    ur_dashboard_msgs__action__SetMode_Result__Sequence__fini(array);
  }
  free(array);
}

bool
ur_dashboard_msgs__action__SetMode_Result__Sequence__are_equal(const ur_dashboard_msgs__action__SetMode_Result__Sequence * lhs, const ur_dashboard_msgs__action__SetMode_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_dashboard_msgs__action__SetMode_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_dashboard_msgs__action__SetMode_Result__Sequence__copy(
  const ur_dashboard_msgs__action__SetMode_Result__Sequence * input,
  ur_dashboard_msgs__action__SetMode_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_dashboard_msgs__action__SetMode_Result);
    ur_dashboard_msgs__action__SetMode_Result * data =
      (ur_dashboard_msgs__action__SetMode_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_dashboard_msgs__action__SetMode_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ur_dashboard_msgs__action__SetMode_Result__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur_dashboard_msgs__action__SetMode_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ur_dashboard_msgs__action__SetMode_Feedback__init(ur_dashboard_msgs__action__SetMode_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_robot_mode
  // current_safety_mode
  return true;
}

void
ur_dashboard_msgs__action__SetMode_Feedback__fini(ur_dashboard_msgs__action__SetMode_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_robot_mode
  // current_safety_mode
}

bool
ur_dashboard_msgs__action__SetMode_Feedback__are_equal(const ur_dashboard_msgs__action__SetMode_Feedback * lhs, const ur_dashboard_msgs__action__SetMode_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_robot_mode
  if (lhs->current_robot_mode != rhs->current_robot_mode) {
    return false;
  }
  // current_safety_mode
  if (lhs->current_safety_mode != rhs->current_safety_mode) {
    return false;
  }
  return true;
}

bool
ur_dashboard_msgs__action__SetMode_Feedback__copy(
  const ur_dashboard_msgs__action__SetMode_Feedback * input,
  ur_dashboard_msgs__action__SetMode_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_robot_mode
  output->current_robot_mode = input->current_robot_mode;
  // current_safety_mode
  output->current_safety_mode = input->current_safety_mode;
  return true;
}

ur_dashboard_msgs__action__SetMode_Feedback *
ur_dashboard_msgs__action__SetMode_Feedback__create()
{
  ur_dashboard_msgs__action__SetMode_Feedback * msg = (ur_dashboard_msgs__action__SetMode_Feedback *)malloc(sizeof(ur_dashboard_msgs__action__SetMode_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_dashboard_msgs__action__SetMode_Feedback));
  bool success = ur_dashboard_msgs__action__SetMode_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_dashboard_msgs__action__SetMode_Feedback__destroy(ur_dashboard_msgs__action__SetMode_Feedback * msg)
{
  if (msg) {
    ur_dashboard_msgs__action__SetMode_Feedback__fini(msg);
  }
  free(msg);
}


bool
ur_dashboard_msgs__action__SetMode_Feedback__Sequence__init(ur_dashboard_msgs__action__SetMode_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_dashboard_msgs__action__SetMode_Feedback * data = NULL;
  if (size) {
    data = (ur_dashboard_msgs__action__SetMode_Feedback *)calloc(size, sizeof(ur_dashboard_msgs__action__SetMode_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_dashboard_msgs__action__SetMode_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_dashboard_msgs__action__SetMode_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ur_dashboard_msgs__action__SetMode_Feedback__Sequence__fini(ur_dashboard_msgs__action__SetMode_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_dashboard_msgs__action__SetMode_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ur_dashboard_msgs__action__SetMode_Feedback__Sequence *
ur_dashboard_msgs__action__SetMode_Feedback__Sequence__create(size_t size)
{
  ur_dashboard_msgs__action__SetMode_Feedback__Sequence * array = (ur_dashboard_msgs__action__SetMode_Feedback__Sequence *)malloc(sizeof(ur_dashboard_msgs__action__SetMode_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_dashboard_msgs__action__SetMode_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_dashboard_msgs__action__SetMode_Feedback__Sequence__destroy(ur_dashboard_msgs__action__SetMode_Feedback__Sequence * array)
{
  if (array) {
    ur_dashboard_msgs__action__SetMode_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
ur_dashboard_msgs__action__SetMode_Feedback__Sequence__are_equal(const ur_dashboard_msgs__action__SetMode_Feedback__Sequence * lhs, const ur_dashboard_msgs__action__SetMode_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_dashboard_msgs__action__SetMode_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_dashboard_msgs__action__SetMode_Feedback__Sequence__copy(
  const ur_dashboard_msgs__action__SetMode_Feedback__Sequence * input,
  ur_dashboard_msgs__action__SetMode_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_dashboard_msgs__action__SetMode_Feedback);
    ur_dashboard_msgs__action__SetMode_Feedback * data =
      (ur_dashboard_msgs__action__SetMode_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_dashboard_msgs__action__SetMode_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ur_dashboard_msgs__action__SetMode_Feedback__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur_dashboard_msgs__action__SetMode_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "ur_dashboard_msgs/action/detail/set_mode__functions.h"

bool
ur_dashboard_msgs__action__SetMode_SendGoal_Request__init(ur_dashboard_msgs__action__SetMode_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ur_dashboard_msgs__action__SetMode_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!ur_dashboard_msgs__action__SetMode_Goal__init(&msg->goal)) {
    ur_dashboard_msgs__action__SetMode_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
ur_dashboard_msgs__action__SetMode_SendGoal_Request__fini(ur_dashboard_msgs__action__SetMode_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  ur_dashboard_msgs__action__SetMode_Goal__fini(&msg->goal);
}

bool
ur_dashboard_msgs__action__SetMode_SendGoal_Request__are_equal(const ur_dashboard_msgs__action__SetMode_SendGoal_Request * lhs, const ur_dashboard_msgs__action__SetMode_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!ur_dashboard_msgs__action__SetMode_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
ur_dashboard_msgs__action__SetMode_SendGoal_Request__copy(
  const ur_dashboard_msgs__action__SetMode_SendGoal_Request * input,
  ur_dashboard_msgs__action__SetMode_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!ur_dashboard_msgs__action__SetMode_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

ur_dashboard_msgs__action__SetMode_SendGoal_Request *
ur_dashboard_msgs__action__SetMode_SendGoal_Request__create()
{
  ur_dashboard_msgs__action__SetMode_SendGoal_Request * msg = (ur_dashboard_msgs__action__SetMode_SendGoal_Request *)malloc(sizeof(ur_dashboard_msgs__action__SetMode_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_dashboard_msgs__action__SetMode_SendGoal_Request));
  bool success = ur_dashboard_msgs__action__SetMode_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_dashboard_msgs__action__SetMode_SendGoal_Request__destroy(ur_dashboard_msgs__action__SetMode_SendGoal_Request * msg)
{
  if (msg) {
    ur_dashboard_msgs__action__SetMode_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence__init(ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_dashboard_msgs__action__SetMode_SendGoal_Request * data = NULL;
  if (size) {
    data = (ur_dashboard_msgs__action__SetMode_SendGoal_Request *)calloc(size, sizeof(ur_dashboard_msgs__action__SetMode_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_dashboard_msgs__action__SetMode_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_dashboard_msgs__action__SetMode_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence__fini(ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_dashboard_msgs__action__SetMode_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence *
ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence__create(size_t size)
{
  ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence * array = (ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence *)malloc(sizeof(ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence__destroy(ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence * array)
{
  if (array) {
    ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence__are_equal(const ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence * lhs, const ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_dashboard_msgs__action__SetMode_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence__copy(
  const ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence * input,
  ur_dashboard_msgs__action__SetMode_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_dashboard_msgs__action__SetMode_SendGoal_Request);
    ur_dashboard_msgs__action__SetMode_SendGoal_Request * data =
      (ur_dashboard_msgs__action__SetMode_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_dashboard_msgs__action__SetMode_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ur_dashboard_msgs__action__SetMode_SendGoal_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur_dashboard_msgs__action__SetMode_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ur_dashboard_msgs__action__SetMode_SendGoal_Response__init(ur_dashboard_msgs__action__SetMode_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ur_dashboard_msgs__action__SetMode_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
ur_dashboard_msgs__action__SetMode_SendGoal_Response__fini(ur_dashboard_msgs__action__SetMode_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
ur_dashboard_msgs__action__SetMode_SendGoal_Response__are_equal(const ur_dashboard_msgs__action__SetMode_SendGoal_Response * lhs, const ur_dashboard_msgs__action__SetMode_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
ur_dashboard_msgs__action__SetMode_SendGoal_Response__copy(
  const ur_dashboard_msgs__action__SetMode_SendGoal_Response * input,
  ur_dashboard_msgs__action__SetMode_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

ur_dashboard_msgs__action__SetMode_SendGoal_Response *
ur_dashboard_msgs__action__SetMode_SendGoal_Response__create()
{
  ur_dashboard_msgs__action__SetMode_SendGoal_Response * msg = (ur_dashboard_msgs__action__SetMode_SendGoal_Response *)malloc(sizeof(ur_dashboard_msgs__action__SetMode_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_dashboard_msgs__action__SetMode_SendGoal_Response));
  bool success = ur_dashboard_msgs__action__SetMode_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_dashboard_msgs__action__SetMode_SendGoal_Response__destroy(ur_dashboard_msgs__action__SetMode_SendGoal_Response * msg)
{
  if (msg) {
    ur_dashboard_msgs__action__SetMode_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence__init(ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_dashboard_msgs__action__SetMode_SendGoal_Response * data = NULL;
  if (size) {
    data = (ur_dashboard_msgs__action__SetMode_SendGoal_Response *)calloc(size, sizeof(ur_dashboard_msgs__action__SetMode_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_dashboard_msgs__action__SetMode_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_dashboard_msgs__action__SetMode_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence__fini(ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_dashboard_msgs__action__SetMode_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence *
ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence__create(size_t size)
{
  ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence * array = (ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence *)malloc(sizeof(ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence__destroy(ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence * array)
{
  if (array) {
    ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence__are_equal(const ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence * lhs, const ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_dashboard_msgs__action__SetMode_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence__copy(
  const ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence * input,
  ur_dashboard_msgs__action__SetMode_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_dashboard_msgs__action__SetMode_SendGoal_Response);
    ur_dashboard_msgs__action__SetMode_SendGoal_Response * data =
      (ur_dashboard_msgs__action__SetMode_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_dashboard_msgs__action__SetMode_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ur_dashboard_msgs__action__SetMode_SendGoal_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur_dashboard_msgs__action__SetMode_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
ur_dashboard_msgs__action__SetMode_GetResult_Request__init(ur_dashboard_msgs__action__SetMode_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ur_dashboard_msgs__action__SetMode_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
ur_dashboard_msgs__action__SetMode_GetResult_Request__fini(ur_dashboard_msgs__action__SetMode_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
ur_dashboard_msgs__action__SetMode_GetResult_Request__are_equal(const ur_dashboard_msgs__action__SetMode_GetResult_Request * lhs, const ur_dashboard_msgs__action__SetMode_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
ur_dashboard_msgs__action__SetMode_GetResult_Request__copy(
  const ur_dashboard_msgs__action__SetMode_GetResult_Request * input,
  ur_dashboard_msgs__action__SetMode_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

ur_dashboard_msgs__action__SetMode_GetResult_Request *
ur_dashboard_msgs__action__SetMode_GetResult_Request__create()
{
  ur_dashboard_msgs__action__SetMode_GetResult_Request * msg = (ur_dashboard_msgs__action__SetMode_GetResult_Request *)malloc(sizeof(ur_dashboard_msgs__action__SetMode_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_dashboard_msgs__action__SetMode_GetResult_Request));
  bool success = ur_dashboard_msgs__action__SetMode_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_dashboard_msgs__action__SetMode_GetResult_Request__destroy(ur_dashboard_msgs__action__SetMode_GetResult_Request * msg)
{
  if (msg) {
    ur_dashboard_msgs__action__SetMode_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence__init(ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_dashboard_msgs__action__SetMode_GetResult_Request * data = NULL;
  if (size) {
    data = (ur_dashboard_msgs__action__SetMode_GetResult_Request *)calloc(size, sizeof(ur_dashboard_msgs__action__SetMode_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_dashboard_msgs__action__SetMode_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_dashboard_msgs__action__SetMode_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence__fini(ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_dashboard_msgs__action__SetMode_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence *
ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence__create(size_t size)
{
  ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence * array = (ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence *)malloc(sizeof(ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence__destroy(ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence * array)
{
  if (array) {
    ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence__are_equal(const ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence * lhs, const ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_dashboard_msgs__action__SetMode_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence__copy(
  const ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence * input,
  ur_dashboard_msgs__action__SetMode_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_dashboard_msgs__action__SetMode_GetResult_Request);
    ur_dashboard_msgs__action__SetMode_GetResult_Request * data =
      (ur_dashboard_msgs__action__SetMode_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_dashboard_msgs__action__SetMode_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ur_dashboard_msgs__action__SetMode_GetResult_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur_dashboard_msgs__action__SetMode_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "ur_dashboard_msgs/action/detail/set_mode__functions.h"

bool
ur_dashboard_msgs__action__SetMode_GetResult_Response__init(ur_dashboard_msgs__action__SetMode_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!ur_dashboard_msgs__action__SetMode_Result__init(&msg->result)) {
    ur_dashboard_msgs__action__SetMode_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
ur_dashboard_msgs__action__SetMode_GetResult_Response__fini(ur_dashboard_msgs__action__SetMode_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  ur_dashboard_msgs__action__SetMode_Result__fini(&msg->result);
}

bool
ur_dashboard_msgs__action__SetMode_GetResult_Response__are_equal(const ur_dashboard_msgs__action__SetMode_GetResult_Response * lhs, const ur_dashboard_msgs__action__SetMode_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!ur_dashboard_msgs__action__SetMode_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
ur_dashboard_msgs__action__SetMode_GetResult_Response__copy(
  const ur_dashboard_msgs__action__SetMode_GetResult_Response * input,
  ur_dashboard_msgs__action__SetMode_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!ur_dashboard_msgs__action__SetMode_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

ur_dashboard_msgs__action__SetMode_GetResult_Response *
ur_dashboard_msgs__action__SetMode_GetResult_Response__create()
{
  ur_dashboard_msgs__action__SetMode_GetResult_Response * msg = (ur_dashboard_msgs__action__SetMode_GetResult_Response *)malloc(sizeof(ur_dashboard_msgs__action__SetMode_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_dashboard_msgs__action__SetMode_GetResult_Response));
  bool success = ur_dashboard_msgs__action__SetMode_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_dashboard_msgs__action__SetMode_GetResult_Response__destroy(ur_dashboard_msgs__action__SetMode_GetResult_Response * msg)
{
  if (msg) {
    ur_dashboard_msgs__action__SetMode_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence__init(ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_dashboard_msgs__action__SetMode_GetResult_Response * data = NULL;
  if (size) {
    data = (ur_dashboard_msgs__action__SetMode_GetResult_Response *)calloc(size, sizeof(ur_dashboard_msgs__action__SetMode_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_dashboard_msgs__action__SetMode_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_dashboard_msgs__action__SetMode_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence__fini(ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_dashboard_msgs__action__SetMode_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence *
ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence__create(size_t size)
{
  ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence * array = (ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence *)malloc(sizeof(ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence__destroy(ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence * array)
{
  if (array) {
    ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence__are_equal(const ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence * lhs, const ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_dashboard_msgs__action__SetMode_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence__copy(
  const ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence * input,
  ur_dashboard_msgs__action__SetMode_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_dashboard_msgs__action__SetMode_GetResult_Response);
    ur_dashboard_msgs__action__SetMode_GetResult_Response * data =
      (ur_dashboard_msgs__action__SetMode_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_dashboard_msgs__action__SetMode_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ur_dashboard_msgs__action__SetMode_GetResult_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur_dashboard_msgs__action__SetMode_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "ur_dashboard_msgs/action/detail/set_mode__functions.h"

bool
ur_dashboard_msgs__action__SetMode_FeedbackMessage__init(ur_dashboard_msgs__action__SetMode_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ur_dashboard_msgs__action__SetMode_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!ur_dashboard_msgs__action__SetMode_Feedback__init(&msg->feedback)) {
    ur_dashboard_msgs__action__SetMode_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
ur_dashboard_msgs__action__SetMode_FeedbackMessage__fini(ur_dashboard_msgs__action__SetMode_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  ur_dashboard_msgs__action__SetMode_Feedback__fini(&msg->feedback);
}

bool
ur_dashboard_msgs__action__SetMode_FeedbackMessage__are_equal(const ur_dashboard_msgs__action__SetMode_FeedbackMessage * lhs, const ur_dashboard_msgs__action__SetMode_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ur_dashboard_msgs__action__SetMode_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
ur_dashboard_msgs__action__SetMode_FeedbackMessage__copy(
  const ur_dashboard_msgs__action__SetMode_FeedbackMessage * input,
  ur_dashboard_msgs__action__SetMode_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ur_dashboard_msgs__action__SetMode_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

ur_dashboard_msgs__action__SetMode_FeedbackMessage *
ur_dashboard_msgs__action__SetMode_FeedbackMessage__create()
{
  ur_dashboard_msgs__action__SetMode_FeedbackMessage * msg = (ur_dashboard_msgs__action__SetMode_FeedbackMessage *)malloc(sizeof(ur_dashboard_msgs__action__SetMode_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_dashboard_msgs__action__SetMode_FeedbackMessage));
  bool success = ur_dashboard_msgs__action__SetMode_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ur_dashboard_msgs__action__SetMode_FeedbackMessage__destroy(ur_dashboard_msgs__action__SetMode_FeedbackMessage * msg)
{
  if (msg) {
    ur_dashboard_msgs__action__SetMode_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence__init(ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ur_dashboard_msgs__action__SetMode_FeedbackMessage * data = NULL;
  if (size) {
    data = (ur_dashboard_msgs__action__SetMode_FeedbackMessage *)calloc(size, sizeof(ur_dashboard_msgs__action__SetMode_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_dashboard_msgs__action__SetMode_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_dashboard_msgs__action__SetMode_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence__fini(ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ur_dashboard_msgs__action__SetMode_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence *
ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence__create(size_t size)
{
  ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence * array = (ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence *)malloc(sizeof(ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence__destroy(ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence * array)
{
  if (array) {
    ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence__are_equal(const ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence * lhs, const ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_dashboard_msgs__action__SetMode_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence__copy(
  const ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence * input,
  ur_dashboard_msgs__action__SetMode_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_dashboard_msgs__action__SetMode_FeedbackMessage);
    ur_dashboard_msgs__action__SetMode_FeedbackMessage * data =
      (ur_dashboard_msgs__action__SetMode_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_dashboard_msgs__action__SetMode_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ur_dashboard_msgs__action__SetMode_FeedbackMessage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur_dashboard_msgs__action__SetMode_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}