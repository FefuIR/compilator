cmake_minimum_required(VERSION 3.17)
project(lexical_analyzer)

set(CMAKE_CXX_STANDARD 14)

add_executable(lexical_analyzer main.cpp lexical_analyzer.cpp lexical_analyzer.h)