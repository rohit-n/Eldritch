cmake_minimum_required(VERSION 2.6)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

include_directories(../Math/src)
include_directories(../Core/src)
include_directories(../GLEW/src)
include_directories(src/FMOD)
include_directories(${FMOD_INCLUDE_DIR})

set(audio_src
src/audio.cpp
src/audio.h
src/audiosystemcommon.cpp
src/audiosystemcommon.h
src/fmodaudiosystem.cpp
src/fmodaudiosystem.h
src/fmodsound.cpp
src/fmodsound.h
src/fmodsoundinstance.cpp
src/fmodsoundinstance.h
src/iaudiosystem.h
src/isound.h
src/isoundinstance.h
src/musicmanager.cpp
src/musicmanager.h
src/sound3dlistener.cpp
src/sound3dlistener.h
src/soundcommon.cpp
src/soundcommon.h
src/soundinstancecommon.cpp
src/soundinstancecommon.h
src/soundmanager.cpp
src/soundmanager.h
)
 
add_library(Audio ${audio_src})