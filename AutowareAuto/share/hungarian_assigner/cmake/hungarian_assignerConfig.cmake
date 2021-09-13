# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_hungarian_assigner_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED hungarian_assigner_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(hungarian_assigner_FOUND FALSE)
  elseif(NOT hungarian_assigner_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(hungarian_assigner_FOUND FALSE)
  endif()
  return()
endif()
set(_hungarian_assigner_CONFIG_INCLUDED TRUE)

# output package information
if(NOT hungarian_assigner_FIND_QUIETLY)
  message(STATUS "Found hungarian_assigner: 1.0.0 (${hungarian_assigner_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'hungarian_assigner' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${hungarian_assigner_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(hungarian_assigner_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${hungarian_assigner_DIR}/${_extra}")
endforeach()
