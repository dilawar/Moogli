CMAKE_MINIMUM_REQUIRED(VERSION "3.10")
project(moogli)

SET(PROJECT_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
SET(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake_modules")

## Options
option(BUILD_STATIC "Link osg statically. Useful for creating standalone packages" OFF)

add_definitions(-std=c++11)
add_definitions(-fPIC)

find_package(PythonInterp 3.5 REQUIRED)
find_package(PythonLibs REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

find_package(Qt5 COMPONENTS Core Widgets OpenGL REQUIRED)
include_directories(${Qt5Core_INCLUDE_DIRS}
    ${Qt5OpenGL_INCLUDE_DIRS}
    ${Qt5Widgets_INCLUDE_DIRS})

find_package(PyQt5 REQUIRED)

MESSAGE("++ Found SIP flags: ${PYQT5_SIP_FLAGS}")
SEPARATE_ARGUMENTS(PYQT5_SIP_FLAGS) # convert space separated values to a list

SET(SIP_CONCAT_PARTS 4)
SET(SIP_EXTRA_OPTIONS ${PYQT5_SIP_FLAGS})

IF (NOT BINDINGS_GLOBAL_INSTALL)
    SET(PYTHON_SITE_PACKAGES_DIR ${QGIS_DATA_DIR}/python)
ENDIF (NOT BINDINGS_GLOBAL_INSTALL)
IF (WITH_CUSTOM_WIDGETS)
    SET(PYUIC_WIDGET_PLUGIN_DIRECTORY ${PYQT5_MOD_DIR}/uic/widget-plugins/)
ENDIF (WITH_CUSTOM_WIDGETS)

FIND_PACKAGE(OpenSceneGraph COMPONENTS
    osgFX 
    osgGA
    osgAnimation 
    osgViewer
    osgManipulator 
    osgSim
    osgText
    osgDB
    osgUtil
    OpenThreads REQUIRED)

message(STATUS "OSG LIBRARIES: ${OPENSCENEGRAPH_LIBRARIES}")

find_package(SIP REQUIRED)
include_directories(${SIP_INCLUDE_DIR})

include_directories(./include ${PROJECT_SOURCE_DIR}/bin/include ".")

# include_directories(${OSGQT_INCLUDE_DIR})
include_directories(${OPENSCENEGRAPH_INCLUDE_DIRS})
# include_directories(${OSGANIMATION_INCLUDE_DIR})

add_subdirectory(${PROJECT_SOURCE_DIR}/bin/sip)
add_subdirectory(${PROJECT_SOURCE_DIR}/bin/src)

ADD_LIBRARY(_moogli SHARED 
    ${PROJECT_SOURCE_DIR}/bin/moc/Viewer.moc.cpp
    )

SET_TARGET_PROPERTIES(_moogli PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/core"
    PREFIX ""
    )

## Link the following libraries to moogli.
SET(STATIC_LIBRARIES sip src)

SET(DYNAMIC_LIBRARIES
    QtCore
    QtGui
    QtOpenGL           
    )

IF(BUILD_STATIC)
    LIST(APPEND STATIC_LIBRARIES ${OPENSCENEGRAPH_LIBRARIES})
ELSE(BUILD_STATIC)
    LIST(APPEND DYNAMIC_LIBRARIES ${OPENSCENEGRAPH_LIBRARIES})
ENDIF(BUILD_STATIC)

TARGET_LINK_LIBRARIES(_moogli
    "-Wl,--whole-archive"
    ${STATIC_LIBRARIES}
    "-Wl,--no-whole-archive"
    ${DYNAMIC_LIBRARIES}
    )

