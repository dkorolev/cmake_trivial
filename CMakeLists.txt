cmake_minimum_required(VERSION 3.14.1)

project(cmake_order C CXX)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

set(objects "")

add_library(foo.o OBJECT "foo.cc")
add_library(bar.o OBJECT "bar.cc")
add_library(main.o OBJECT "main.cc")
list(APPEND objects "foo.o")
list(APPEND objects "bar.o")
list(APPEND objects "main.o")

message(STATUS "CMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}")

add_executable(dummy "dummy.cc")
target_link_libraries(dummy ${objects})
