cmake_minimum_required(VERSION 3.1)
project(AA)

add_library(AA SHARED template.h template.cpp classA.h classA.cpp config.h fixed_array.h fixed_array.cpp RGB.h RGB.cpp)

set_target_properties(AA PROPERTIES COMPILE_FLAGS "-DBUILD_AA")
