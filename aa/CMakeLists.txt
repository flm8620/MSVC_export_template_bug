cmake_minimum_required(VERSION 3.1)
project(AA)

add_library(AA SHARED template.h classA.h classA.cpp config.h)

set_target_properties(AA PROPERTIES COMPILE_FLAGS "-DBUILD_AA")
