##---------------------------------------------------------------------------
# Author:      Ron Southworth and Mike Rossiter
## Copyright:
## License:     wxWidgets License
##---------------------------------------------------------------------------

# define minimum cmake version
CMAKE_MINIMUM_REQUIRED(VERSION 3.1.1)
IF (COMMAND cmake_policy)
  if (POLICY CMP0043)
    CMAKE_POLICY(SET CMP0043 NEW)
  endif (POLICY CMP0043)
  if (POLICY CMP0077)
    CMAKE_POLICY(SET CMP0077 NEW)
  endif (POLICY CMP0077)
ENDIF (COMMAND cmake_policy)

# Prefer libGL.so to libOpenGL.so, see CMP0072
set(OpenGL_GL_PREFERENCE "LEGACY")

PROJECT(Simulator_pi)
SET(PARENT "opencpn")

SET(PACKAGE_NAME Simulator_pi)
SET(PACKAGE_FILE_NAME "opencpn-plugin-Simulator")
SET(VERBOSE_NAME Simulator)
SET(TITLE_NAME Simulator)
SET(CPACK_PACKAGE_CONTACT "Ron Southworth")

SET(VERSION_MAJOR "0")
SET(VERSION_MINOR "1")
SET(VERSION_PATCH "1")
SET(VERSION_DATE "14/08/2019")
SET(OCPN_MIN_VERSION "ov50")
SET(OD_COMMENT "  * Beta using O5 using CI")
SET(OCPN_API_VERSION_MAJOR "1")
SET(OCPN_API_VERSION_MINOR "16")
SET(OD_API_VERSION_MAJOR "1")
SET(OD_API_VERSION_MINOR "1")

MESSAGE(STATUS "OD Version: ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}")
MESSAGE(STATUS "OD API Version: ${OD_API_VERSION_MAJOR}.${OD_API_VERSION_MINOR}")
MESSAGE(STATUS "OCPN API Verson: ${OCPN_API_VERSION_MAJOR}.${OCPN_API_VERSION_MINOR}")
MESSAGE(STATUS "OCPN Min Verson: ${OCPN_MIN_VERSION}")

SET(BUNDLE_DATA FALSE)
SET( CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the type of build" )
SET_PROPERTY( CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "None" "Debug" "Release" "RelWithDebInfo" "MinSizeRel" )

MESSAGE (STATUS "Build type: ${CMAKE_BUILD_TYPE}")

SET(CMAKE_VERBOSE_MAKEFILE ON)

if (CMAKE_VERSION VERSION_LESS "3.1")
  include(CheckCXXCompilerFlag)
  CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
  CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
  if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
    message(STATUS "Setting C++11 standard via CXX flags")
  elseif(COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
    message(STATUS "Setting C++0x standard via CXX FLAGS")
  else()
        message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
  endif()
else ()
  set (CMAKE_CXX_STANDARD 11)
  message(STATUS "Setting C++11 standard via cmake standard mecahnism")
endif ()

OPTION(OCPN_USE_LIBCPP "Use C++11 and libc++ instead of libstdc++ on macOS" ON)

if ( CMAKE_VERSION VERSION_GREATER 3.4 )
  set(ENABLE_CLANG_TIDY OFF CACHE BOOL "Add clang-tidy automatically to builds")
  if (ENABLE_CLANG_TIDY)
    find_program (CLANG_TIDY_EXE NAMES "clang-tidy" PATHS /usr/local/opt/llvm/bin )
    if (CLANG_TIDY_EXE)
      message(STATUS "clang-tidy found: ${CLANG_TIDY_EXE}")
      #For more, see http://clang.llvm.org/extra/clang-tidy/
      #set(CLANG_TIDY_CHECKS "-*,modernize-*")
      set(CLANG_TIDY_CHECKS "-*,performance-*")
      set(CMAKE_CXX_CLANG_TIDY "${CLANG_TIDY_EXE};-checks=${CLANG_TIDY_CHECKS};-header-filter='${CMAKE_SOURCE_DIR}/*'"
        CACHE STRING "" FORCE)
    else()
      message(AUTHOR_WARNING "clang-tidy not found!")
      set(CMAKE_CXX_CLANG_TIDY "" CACHE STRING "" FORCE) # delete it
    endif()
  endif()
endif()

# Add support for address etc sanitizers, part 1/2 (other half after ADD_EXECUTABLE)
if ( CMAKE_VERSION VERSION_GREATER 3.4 )
  set(ENABLE_SANITIZER "none" CACHE STRING "Add clang sanitizer to the build")
  set_property(CACHE ENABLE_SANITIZER PROPERTY STRINGS none address memory thread undefined)
  if (NOT "${ENABLE_SANITIZER}" MATCHES "none")
    add_compile_options(-fsanitize=${ENABLE_SANITIZER})
  endif()
endif()

if ( CMAKE_VERSION VERSION_GREATER 3.9 )
  set(ENABLE_CPPCHECK OFF CACHE BOOL "Add cppcheck automatically to builds")
  if (ENABLE_CPPCHECK)
      find_program (CPPCHECK_EXECUTABLE NAMES "cppcheck" )
      set(CMAKE_CXX_CPPCHECK ${CPPCHECK_EXECUTABLE})
  endif()
endif()

#SET_DIRECTORY_PROPERTIES(dummy ADDITIONAL_MAKE_CLEAN_FILES ${PROJECT_SOURCE_DIR}/include/version.h)

INCLUDE("cmake/PluginConfigure.cmake")

ADD_DEFINITIONS(-DUSE_S57)


SET(SRCS
   
        src/Simulator_pi.cpp
        src/icons.cpp
	src/Simulatorgui.cpp
	src/Simulatorgui_impl.cpp
	src/folder.xpm		
	src/AisMaker.cpp
	src/GribRecord.cpp
	src/tinyxml.cpp
	src/tinyxmlerror.cpp
	src/tinyxmlparser.cpp
)

SET(HDRS
     src/Simulator_pi.h
     src/icons.h
     src/Simulatorgui.h
     src/Simulatorgui_impl.h
     src/ocpn_plugin.h 
     src/AisMaker.h
     src/GribRecordSet.h
     src/GribRecord.h
     src/tinyxml.h

   
)

SET(OCPNSRC 
    ocpnsrc/bbox.cpp
    ocpnsrc/cutil.cpp
    ocpnsrc/geodesic.cpp
    ocpnsrc/georef.cpp
    ocpnsrc/Hyperlink.cpp
    ocpnsrc/SelectItem.cpp
    ocpnsrc/TexFont.cpp
    ocpnsrc/wxJSON/jsonreader.cpp
    ocpnsrc/wxJSON/jsonval.cpp
    ocpnsrc/wxJSON/jsonwriter.cpp

)
SET(OCPNHDRS
    ocpninclude/AISTargetAlertDialog.h
    ocpninclude/AISTargetQueryDialog.h
    ocpninclude/bbox.h
    ocpninclude/cutil.h
    ocpninclude/geodesic.h
    ocpninclude/georef.h
    ocpninclude/Hyperlink.h
    ocpninclude/ocpn_plugin.h
    ocpninclude/SelectItem.h
    ocpninclude/TexFont.h
    ocpninclude/timers.h
    ocpninclude/vector2D.h
    ocpninclude/wx28compat.h
    ocpninclude/GL/gl.h
    ocpninclude/GL/glext.h
    ocpninclude/GL/gl_private.h
    ocpninclude/GL/glu.h
    ocpninclude/wx/json_defs.h
    ocpninclude/wx/jsonreader.h
    ocpninclude/wx/jsonval.h
    ocpninclude/wx/jsonwriter.h
)

OPTION(OD_USE_SVG "Use SVG graphics" ON)

IF(OD_USE_SVG)
  MESSAGE(STATUS "SVG support enabled...")
  IF(NOT QT_ANDROID)

    ADD_DEFINITIONS(-DODraw_USE_SVG)
  ENDIF(NOT QT_ANDROID)
ENDIF(OD_USE_SVG)

IF(OCPN_MIN_VERSION)
  MESSAGE(STATUS "Using O5 MUI")
  IF(NOT QT_ANDROID)
    ADD_DEFINITIONS(-DODraw_USE_MUI)
  ENDIF(NOT QT_ANDROID)
ENDIF(OCPN_MIN_VERSION)

INCLUDE_DIRECTORIES(BEFORE ${PROJECT_SOURCE_DIR}/src/mygdal  )
INCLUDE_DIRECTORIES(BEFORE ${PROJECT_SOURCE_DIR}/ocpninclude)
INCLUDE_DIRECTORIES(BEFORE ${PROJECT_SOURCE_DIR}/ocpnsrc/glu/include)
INCLUDE_DIRECTORIES(BEFORE ${PROJECT_SOURCE_DIR}/extinclude)
INCLUDE_DIRECTORIES(BEFORE ${PROJECT_SOURCE_DIR}/ocpninclude/wxcurl)
INCLUDE_DIRECTORIES(BEFORE ${PROJECT_SOURCE_DIR}/ocpninclude/wxcurl/include)
INCLUDE_DIRECTORIES(BEFORE ${PROJECT_SOURCE_DIR}/ocpninclude/GL)
INCLUDE_DIRECTORIES(BEFORE ${PROJECT_SOURCE_DIR}/ocpnsrc/lz4)
INCLUDE_DIRECTORIES(BEFORE ${PROJECT_SOURCE_DIR}/ocpnsrc/bitmaps)

IF(UNIX)
 INCLUDE("cmake/FindTinyXML.cmake")
 FIND_PACKAGE(TinyXML QUIET)
ENDIF(UNIX)

IF(WIN32)
SET(SRC_JSON
         src/wxJSON/jsonval.cpp
         src/wxJSON/jsonreader.cpp
         src/wxJSON/jsonwriter.cpp
         src/wx/json_defs.h
         src/wx/jsonval.h
         src/wx/jsonreader.h
         src/wx/jsonwriter.h)
ENDIF(WIN32)

IF(TINYXML_FOUND)
 message (STATUS "Building with system tinyxml")
 INCLUDE_DIRECTORIES(${TINYXML_INCLUDE_DIR})
 ADD_LIBRARY(${PACKAGE_NAME} SHARED ${SRCS} ${HDRS} ${OCPNSRC} ${EXTSRC})
 TARGET_LINK_LIBRARIES(${PACKAGE_NAME} ${TINYXML_LIBRARIES})
ELSE(TINYXML_FOUND)
 message (STATUS "Building with embedded tinyxml")
 INCLUDE_DIRECTORIES(src/tinyxml/)
 SET(SRC_LTINYXML
            src/tinyxml/tinyxml.cpp
            src/tinyxml/tinyxmlparser.cpp
            src/tinyxml/tinyxmlerror.cpp
 )
 ADD_LIBRARY(${PACKAGE_NAME} SHARED ${SRCS} ${HDRS} ${OCPNSRC} ${EXTSRC} ${SRC_LTINYXML})
ENDIF(TINYXML_FOUND)

ADD_DEFINITIONS(-DTIXML_USE_STL)

IF(UNIX AND NOT APPLE)
  IF(OD_JSON_SCHEMA_VALIDATOR)
    # Change OS/ABI to be UNIX - System V to make it run with OCPN
    SET(lib_name lib${PACKAGE_NAME}.so)
    MESSAGE(STATUS "lib-name: ${lib_name}")
    FIND_FILE(elfedit elfedit) 
    IF(NOT (${elfedit} STREQUAL "elfedit-NOTFOUND"))
      MESSAGE(STATUS "Will ensure OS/ABI is set to 0 to match OCPN")
      ADD_CUSTOM_COMMAND(
        TARGET ${PACKAGE_NAME}
        POST_BUILD
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        DEPENDS ${PACKAGE_NAME}
        COMMENT " Running post build action on ${lib_name}."
        COMMAND sh -c 'elfedit --input-osabi=Linux --output-osabi=none ${lib_name} || (echo 0) '
      )
    ELSE(NOT (${elfedit} STREQUAL "elfedit-NOTFOUND"))
      MESSAGE(STATUS "Cannot correct OS/ABI to match OCPN if it is generated incorrectly. Package binutils needed")
    ENDIF(NOT (${elfedit} STREQUAL "elfedit-NOTFOUND"))
  ENDIF(OD_JSON_SCHEMA_VALIDATOR)
ENDIF(UNIX AND NOT APPLE)

INCLUDE("cmake/PluginInstall.cmake")
INCLUDE("cmake/PluginLocalization.cmake")
INCLUDE("cmake/PluginPackage.cmake")
get_property(dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
foreach(dir ${dirs})
  message(STATUS "dir='${dir}'")
endforeach()
