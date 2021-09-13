# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_autoware_demos_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED autoware_demos_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(autoware_demos_FOUND FALSE)
  elseif(NOT autoware_demos_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(autoware_demos_FOUND FALSE)
  endif()
  return()
endif()
set(_autoware_demos_CONFIG_INCLUDED TRUE)

# output package information
if(NOT autoware_demos_FIND_QUIETLY)
  message(STATUS "Found autoware_demos: 1.0.0 (${autoware_demos_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'autoware_demos' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${autoware_demos_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(autoware_demos_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${autoware_demos_DIR}/${_extra}")
endforeach()
