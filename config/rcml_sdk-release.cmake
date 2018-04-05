#----------------------------------------------------------------
# Generated CMake target import file for configuration "RELEASE".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rcml_sdk" for configuration "RELEASE"
set_property(TARGET rcml_sdk APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rcml_sdk PROPERTIES
  IMPORTED_IMPLIB_RELEASE "${_IMPORT_PREFIX}/bin/librcml_sdk.dll.a"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/rcml_sdk.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rcml_sdk )
list(APPEND _IMPORT_CHECK_FILES_FOR_rcml_sdk "${_IMPORT_PREFIX}/bin/librcml_sdk.dll.a" "${_IMPORT_PREFIX}/bin/rcml_sdk.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
