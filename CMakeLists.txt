cmake_minimum_required(VERSION 3.24)
project(SortingAlgorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(SortingAlgorithms SortingMain.cpp SortingFunctions.h SortingFunctions.cpp)
add_executable(SortingAlgorithms_2 SortingMain.cpp SortingAlgorithms.cpp)