cmake_minimum_required(VERSION 3.8)
project(driver_school)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp train/train.cpp train/train.h train/load.cpp train/load.h)
add_executable(driver_school ${SOURCE_FILES})