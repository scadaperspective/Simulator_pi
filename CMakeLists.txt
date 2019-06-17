##---------------------------------------------------------------------------
## Author:      Ron Southworth and Mike Rossiter
## Copyright:
## License:     wxWidgets License
##---------------------------------------------------------------------------

# define minimum cmake version
CMAKE_MINIMUM_REQUIRED(VERSION 2.6.2)

PROJECT(Simulator_pi)

SET(PACKAGE_NAME Simulator_pi)
SET(VERBOSE_NAME Simulator)
SET(TITLE_NAME Simulator)
SET(CPACK_PACKAGE_CONTACT "Ron Southworth")

SET(VERSION_MAJOR "0")
SET(VERSION_MINOR "1")
SET(VERSION_PATCH "0")
SET(VERSION_DATE "2019-05-14")
SET(NAME_SUFFIX "ov50")
SET(OCPN_MIN_VERSION "ov50")

set (CMAKE_CXX_STANDARD 11)

#SET(CMAKE_BUILD_TYPE Debug)

##SET( wxWidgets_USE_DEBUG OFF)
##SET( wxWidgets_USE_UNICODE ON)
##SET( wxWidgets_USE_UNIVERSAL OFF)
##SET( wxWidgets_USE_STATIC OFF)




OPTION(SIMULATOR_USE_SVG "Use SVG graphics" ON)

INCLUDE("cmake/PluginConfigure.cmake")

IF(SIMULATOR_USE_SVG)
  ADD_DEFINITIONS(-DSIMULATOR_USE_SVG)
ENDIF(SIMULATOR_USE_SVG)

include(CheckCXXCompilerFlag)
check_cxx_compiler_flag(-std=c++11 HAS_STD_CPP11_FLAG)
if(HAS_STD_CPP11_FLAG)
  add_compile_options(-std=c++11)
endif()

SET(SRC_SIMULATOR
        src/Simulator_pi.h
        src/Simulator_pi.cpp
        src/icons.h
        src/icons.cpp
	    src/Simulatorgui.h
	    src/Simulatorgui.cpp
	    src/Simulatorgui_impl.cpp
	    src/Simulatorgui_impl.h
		src/ocpn_plugin.h
		src/folder.xpm
		src/AisMaker.h
		src/AisMaker.cpp
		src/GribRecord.cpp
		src/GribRecordSet.h
		src/GribRecord.h
	    src/tinyxml.h
		src/tinyxml.cpp
	    src/tinyxmlerror.cpp
		src/tinyxmlparser.cpp
	)

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


ADD_LIBRARY(${PACKAGE_NAME} SHARED ${SRC_SIMULATOR} ${SRC_JSON}
)

ADD_DEFINITIONS(-DTIXML_USE_STL)

INCLUDE("cmake/PluginInstall.cmake")
INCLUDE("cmake/PluginLocalization.cmake")
INCLUDE("cmake/PluginPackage.cmake")
