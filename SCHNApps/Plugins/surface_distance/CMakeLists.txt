cmake_minimum_required(VERSION 2.8)

SET( PLUGIN_NAME Surface_Distance )

SET( PLUGIN_ROOT_DIR ${SCHNApps_ROOT_DIR}/Plugins/surface_distance )

ADD_DEFINITIONS(-DSURFACE_DISTANCE_DLL_EXPORT)

INCLUDE_DIRECTORIES(
	${PLUGIN_ROOT_DIR}/include
	${CMAKE_CURRENT_BINARY_DIR}
)

file(
	GLOB_RECURSE
	PLUGIN_FILES
	${PLUGIN_ROOT_DIR}/src/*.cpp
	${PLUGIN_ROOT_DIR}/include/*.h
	${PLUGIN_ROOT_DIR}/include/*.hpp
)

file(
	GLOB_RECURSE
	PLUGIN_UI_FILES
	${PLUGIN_ROOT_DIR}/forms/*.ui
)

SET(
	PLUGIN_QOBJECT_FILES
	${PLUGIN_ROOT_DIR}/include/surface_distance.h
	${PLUGIN_ROOT_DIR}/include/dialog_computeDistance.h
)

include( ${SCHNApps_ROOT_DIR}/Plugins/plugins_cmake.txt )
