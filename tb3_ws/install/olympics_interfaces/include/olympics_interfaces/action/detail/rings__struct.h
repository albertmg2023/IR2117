// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from olympics_interfaces:action/Rings.idl
// generated code does not contain a copyright notice

#ifndef OLYMPICS_INTERFACES__ACTION__DETAIL__RINGS__STRUCT_H_
#define OLYMPICS_INTERFACES__ACTION__DETAIL__RINGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Rings in the package olympics_interfaces.
typedef struct olympics_interfaces__action__Rings_Goal
{
  float radius;
} olympics_interfaces__action__Rings_Goal;

// Struct for a sequence of olympics_interfaces__action__Rings_Goal.
typedef struct olympics_interfaces__action__Rings_Goal__Sequence
{
  olympics_interfaces__action__Rings_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} olympics_interfaces__action__Rings_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/Rings in the package olympics_interfaces.
typedef struct olympics_interfaces__action__Rings_Result
{
  int32_t rings_completed;
} olympics_interfaces__action__Rings_Result;

// Struct for a sequence of olympics_interfaces__action__Rings_Result.
typedef struct olympics_interfaces__action__Rings_Result__Sequence
{
  olympics_interfaces__action__Rings_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} olympics_interfaces__action__Rings_Result__Sequence;


// Constants defined in the message

// Struct defined in action/Rings in the package olympics_interfaces.
typedef struct olympics_interfaces__action__Rings_Feedback
{
  int32_t drawing_ring;
  float ring_angle;
} olympics_interfaces__action__Rings_Feedback;

// Struct for a sequence of olympics_interfaces__action__Rings_Feedback.
typedef struct olympics_interfaces__action__Rings_Feedback__Sequence
{
  olympics_interfaces__action__Rings_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} olympics_interfaces__action__Rings_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "olympics_interfaces/action/detail/rings__struct.h"

// Struct defined in action/Rings in the package olympics_interfaces.
typedef struct olympics_interfaces__action__Rings_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  olympics_interfaces__action__Rings_Goal goal;
} olympics_interfaces__action__Rings_SendGoal_Request;

// Struct for a sequence of olympics_interfaces__action__Rings_SendGoal_Request.
typedef struct olympics_interfaces__action__Rings_SendGoal_Request__Sequence
{
  olympics_interfaces__action__Rings_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} olympics_interfaces__action__Rings_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Rings in the package olympics_interfaces.
typedef struct olympics_interfaces__action__Rings_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} olympics_interfaces__action__Rings_SendGoal_Response;

// Struct for a sequence of olympics_interfaces__action__Rings_SendGoal_Response.
typedef struct olympics_interfaces__action__Rings_SendGoal_Response__Sequence
{
  olympics_interfaces__action__Rings_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} olympics_interfaces__action__Rings_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Rings in the package olympics_interfaces.
typedef struct olympics_interfaces__action__Rings_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} olympics_interfaces__action__Rings_GetResult_Request;

// Struct for a sequence of olympics_interfaces__action__Rings_GetResult_Request.
typedef struct olympics_interfaces__action__Rings_GetResult_Request__Sequence
{
  olympics_interfaces__action__Rings_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} olympics_interfaces__action__Rings_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "olympics_interfaces/action/detail/rings__struct.h"

// Struct defined in action/Rings in the package olympics_interfaces.
typedef struct olympics_interfaces__action__Rings_GetResult_Response
{
  int8_t status;
  olympics_interfaces__action__Rings_Result result;
} olympics_interfaces__action__Rings_GetResult_Response;

// Struct for a sequence of olympics_interfaces__action__Rings_GetResult_Response.
typedef struct olympics_interfaces__action__Rings_GetResult_Response__Sequence
{
  olympics_interfaces__action__Rings_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} olympics_interfaces__action__Rings_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "olympics_interfaces/action/detail/rings__struct.h"

// Struct defined in action/Rings in the package olympics_interfaces.
typedef struct olympics_interfaces__action__Rings_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  olympics_interfaces__action__Rings_Feedback feedback;
} olympics_interfaces__action__Rings_FeedbackMessage;

// Struct for a sequence of olympics_interfaces__action__Rings_FeedbackMessage.
typedef struct olympics_interfaces__action__Rings_FeedbackMessage__Sequence
{
  olympics_interfaces__action__Rings_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} olympics_interfaces__action__Rings_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OLYMPICS_INTERFACES__ACTION__DETAIL__RINGS__STRUCT_H_
