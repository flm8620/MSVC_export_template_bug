cmake_minimum_required(VERSION 3.1)
project(BB)

add_library(BB SHARED test.cpp classB.h classB.cpp config.h test2.cpp)

set_target_properties(BB PROPERTIES COMPILE_FLAGS "-DBUILD_BB")
target_link_libraries(BB PUBLIC AA)
