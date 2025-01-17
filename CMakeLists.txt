cmake_minimum_required(VERSION 3.16.3)
Project(BackTrace)
add_executable(BackTrace Backtrace.cpp)
target_include_directories(BackTrace PRIVATE ${CMAKE_SOURCE_DIR})