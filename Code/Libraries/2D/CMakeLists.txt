cmake_minimum_required(VERSION 2.6)

include_directories(../Math/src)
include_directories(../Core/src)

set(2d_src
src/surface.cpp
src/tga.cpp
)
 
add_library(2D ${2d_src})