cmake_minimum_required(VERSION 2.6)
set(CMAKE_INCLUDE_CURRENT_DIR ON)


include_directories(../Core/src)
include_directories(../Math/src)
include_directories(../Workbench/src)
include_directories(../2D/src)
include_directories(../3D/src)
include_directories(../UI/src/)
include_directories(../Audio/src/)

link_directories(${CMAKE_SOURCE_DIR}/Libraries/Core/)
link_directories(${CMAKE_SOURCE_DIR}/Libraries/2D/)
link_directories(${CMAKE_SOURCE_DIR}/Libraries/3D/)
link_directories(${CMAKE_SOURCE_DIR}/Libraries/UI/)

set(framework_src
src/framework3d.cpp
src/framework3d.h
src/frameworkutil.cpp
src/frameworkutil.h
src/uiinputmapframework.cpp
src/uiinputmapframework.h
src/uimanagerframework.cpp
src/uimanagerframework.h
)
 
add_library(Framework ${framework_src})

target_link_libraries(Framework Core)
target_link_libraries(Framework 2D)
target_link_libraries(Framework 3D)
target_link_libraries(Framework UI)