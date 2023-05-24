cmake_minimum_required(VERSION 3.26)
set(CMAKE_BUILD_TYPE Release)
project(pisum)
add_executable(pisum pisum.cpp)
add_library(picalc picalc.cpp benchmark.cpp)
target_include_directories(picalc PUBLIC include)
find_package(fmt)
target_link_libraries(pisum picalc)
target_link_libraries(picalc fmt::fmt)


