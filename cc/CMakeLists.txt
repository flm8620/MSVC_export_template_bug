cmake_minimum_required(VERSION 3.1)
project(CC)

add_library(CC SHARED test.cpp classC.h classC.cpp config.h)

set_target_properties(CC PROPERTIES COMPILE_FLAGS "-DBUILD_CC")
target_link_libraries(CC PUBLIC BB)
