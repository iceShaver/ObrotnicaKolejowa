cmake_minimum_required(VERSION 3.6)
project(ObrotnicaKolejowa)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Turntable.cpp Turntable.h Track.cpp Track.h Car.cpp Car.h Driver.cpp Driver.h List.h)
add_executable(ObrotnicaKolejowa ${SOURCE_FILES})