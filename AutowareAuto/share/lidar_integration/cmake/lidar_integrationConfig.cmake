# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_lidar_integration_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED lidar_integration_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(lidar_integration_FOUND FALSE)
  elseif(NOT lidar_integration_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(lidar_integration_FOUND FALSE)
  endif()
  return()
endif()
set(_lidar_integration_CONFIG_INCLUDED TRUE)

# output package information
if(NOT lidar_integration_FIND_QUIETLY)
  message(STATUS "Found lidar_integration: 1.0.0 (${lidar_integration_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'lidar_integration' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${lidar_integration_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(lidar_integration_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "lidar_integration-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${lidar_integration_DIR}/${_extra}")
endforeach()
