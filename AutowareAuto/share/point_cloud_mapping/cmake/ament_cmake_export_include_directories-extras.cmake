# generated from ament_cmake_export_include_directories/cmake/ament_cmake_export_include_directories-extras.cmake.in

set(_exported_include_dirs "${point_cloud_mapping_DIR}/../../../include;/usr/include/pcl-1.10;/usr/include/eigen3;/usr/include;/usr/include/vtk-7.1;/usr/include/freetype2;/usr/include/x86_64-linux-gnu")

# append include directories to point_cloud_mapping_INCLUDE_DIRS
# warn about not existing paths
if(NOT _exported_include_dirs STREQUAL "")
  find_package(ament_cmake_core QUIET REQUIRED)
  foreach(_exported_include_dir ${_exported_include_dirs})
    if(NOT IS_DIRECTORY "${_exported_include_dir}")
      message(WARNING "Package 'point_cloud_mapping' exports the include directory '${_exported_include_dir}' which doesn't exist")
    endif()
    normalize_path(_exported_include_dir "${_exported_include_dir}")
    list(APPEND point_cloud_mapping_INCLUDE_DIRS "${_exported_include_dir}")
  endforeach()
endif()
