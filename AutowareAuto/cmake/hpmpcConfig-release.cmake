#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "hpmpc" for configuration "Release"
set_property(TARGET hpmpc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(hpmpc PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "m"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libhpmpc.so"
  IMPORTED_SONAME_RELEASE "libhpmpc.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS hpmpc )
list(APPEND _IMPORT_CHECK_FILES_FOR_hpmpc "${_IMPORT_PREFIX}/lib/libhpmpc.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
