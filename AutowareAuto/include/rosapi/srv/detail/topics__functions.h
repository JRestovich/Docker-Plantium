// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rosapi:srv/Topics.idl
// generated code does not contain a copyright notice

#ifndef ROSAPI__SRV__DETAIL__TOPICS__FUNCTIONS_H_
#define ROSAPI__SRV__DETAIL__TOPICS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rosapi/msg/rosidl_generator_c__visibility_control.h"

#include "rosapi/srv/detail/topics__struct.h"

/// Initialize srv/Topics message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosapi__srv__Topics_Request
 * )) before or use
 * rosapi__srv__Topics_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi
bool
rosapi__srv__Topics_Request__init(rosapi__srv__Topics_Request * msg);

/// Finalize srv/Topics message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi
void
rosapi__srv__Topics_Request__fini(rosapi__srv__Topics_Request * msg);

/// Create srv/Topics message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosapi__srv__Topics_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi
rosapi__srv__Topics_Request *
rosapi__srv__Topics_Request__create();

/// Destroy srv/Topics message.
/**
 * It calls
 * rosapi__srv__Topics_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi
void
rosapi__srv__Topics_Request__destroy(rosapi__srv__Topics_Request * msg);


/// Initialize array of srv/Topics messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosapi__srv__Topics_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi
bool
rosapi__srv__Topics_Request__Sequence__init(rosapi__srv__Topics_Request__Sequence * array, size_t size);

/// Finalize array of srv/Topics messages.
/**
 * It calls
 * rosapi__srv__Topics_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi
void
rosapi__srv__Topics_Request__Sequence__fini(rosapi__srv__Topics_Request__Sequence * array);

/// Create array of srv/Topics messages.
/**
 * It allocates the memory for the array and calls
 * rosapi__srv__Topics_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi
rosapi__srv__Topics_Request__Sequence *
rosapi__srv__Topics_Request__Sequence__create(size_t size);

/// Destroy array of srv/Topics messages.
/**
 * It calls
 * rosapi__srv__Topics_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi
void
rosapi__srv__Topics_Request__Sequence__destroy(rosapi__srv__Topics_Request__Sequence * array);

/// Initialize srv/Topics message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosapi__srv__Topics_Response
 * )) before or use
 * rosapi__srv__Topics_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi
bool
rosapi__srv__Topics_Response__init(rosapi__srv__Topics_Response * msg);

/// Finalize srv/Topics message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi
void
rosapi__srv__Topics_Response__fini(rosapi__srv__Topics_Response * msg);

/// Create srv/Topics message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosapi__srv__Topics_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi
rosapi__srv__Topics_Response *
rosapi__srv__Topics_Response__create();

/// Destroy srv/Topics message.
/**
 * It calls
 * rosapi__srv__Topics_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi
void
rosapi__srv__Topics_Response__destroy(rosapi__srv__Topics_Response * msg);


/// Initialize array of srv/Topics messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosapi__srv__Topics_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi
bool
rosapi__srv__Topics_Response__Sequence__init(rosapi__srv__Topics_Response__Sequence * array, size_t size);

/// Finalize array of srv/Topics messages.
/**
 * It calls
 * rosapi__srv__Topics_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi
void
rosapi__srv__Topics_Response__Sequence__fini(rosapi__srv__Topics_Response__Sequence * array);

/// Create array of srv/Topics messages.
/**
 * It allocates the memory for the array and calls
 * rosapi__srv__Topics_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi
rosapi__srv__Topics_Response__Sequence *
rosapi__srv__Topics_Response__Sequence__create(size_t size);

/// Destroy array of srv/Topics messages.
/**
 * It calls
 * rosapi__srv__Topics_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosapi
void
rosapi__srv__Topics_Response__Sequence__destroy(rosapi__srv__Topics_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROSAPI__SRV__DETAIL__TOPICS__FUNCTIONS_H_
