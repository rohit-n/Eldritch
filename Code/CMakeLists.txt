cmake_minimum_required(VERSION 2.6)

project(Eldritch)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package (FMOD)

add_subdirectory(Libraries/Core/)
add_subdirectory(Libraries/Math/)
add_subdirectory(Libraries/2D/)
add_subdirectory(Libraries/3D/)
add_subdirectory(Libraries/Audio/)
add_subdirectory(Libraries/Workbench/)
add_subdirectory(Libraries/Rodin/)
add_subdirectory(Libraries/UI/)
add_subdirectory(Libraries/Framework/)
add_subdirectory(Projects/Eldritch/)
add_subdirectory(Tools/Checksum/)
add_subdirectory(Tools/ConfigCompiler/)
add_subdirectory(Tools/FilePacker/)
add_subdirectory(Tools/MeshCompiler/)
