cmake_minimum_required(VERSION 3.18)
project(game)

set(CMAKE_CXX_STANDARD 14)

add_library(lib interface.h interface.cpp controller.h controller.cpp model.h model.cpp)
add_executable(game main.cpp)
target_link_libraries(game lib)
