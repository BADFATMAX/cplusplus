cmake_minimum_required(VERSION 3.14.5)
project(task3)

set(CMAKE_CXX_STANDARD 14)

add_library(cfg workflow/configuration/Config.cpp workflow/configuration/Config.h)
add_library(ws workflow/workshop/Bench.cpp workflow/workshop/Bench.h)
add_library(wf workflow/Factory.h workflow/Factory.cpp)
link_libraries(wf ws cfg)

add_library(bs workflow/benches/benches_std.h workflow/benches/benches_std.cpp)

add_executable(task3 test.cpp)
target_link_libraries(task3 wf bs)