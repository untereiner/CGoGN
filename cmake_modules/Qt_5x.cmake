
set(DESIRED_QT_VERSION = CGoGN_DESIRED_QT_VERSION)
find_package(Qt5 COMPONENTS Core Widgets Gui OpenGL Xml Svg REQUIRED)
#Qt5Widgets required for qt5_wrap_ui

# aliases (module Widgets included by default)
#macro(qt_use_modules)
#  target_link_libraries(${ARGN} Qt5::Widgets)
#endmacro()

# macro that include module need by cgogn
#macro(qt_use_cgogn_modules)
#  target_link_libraries(${ARGN} Qt5::Gui Qt5::OpenGL Qt5::Xml Qt5::Svg Qt5::Widgets)
#endmacro()

macro(qt_wrap_cpp)
  qt5_wrap_cpp(${ARGN})
endmacro()

macro(qt_add_resources)
  qt5_add_resources(${ARGN})
endmacro()

macro(qt_wrap_ui)
  qt5_wrap_ui(${ARGN})
endmacro()

# version
set(QT_VERSION_MAJOR ${Qt5Core_VERSION_MAJOR})
set(QT_VERSION_MINOR ${Qt5Core_VERSION_MINOR})
set(QT_VERSION_PATCH ${Qt5Core_VERSION_PATCH})
