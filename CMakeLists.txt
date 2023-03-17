cmake_minimum_required(VERSION 3.24)
project(SortingAlgorithms)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SortingAlgorithms
        functions.cpp
        functions.h
        main.cpp
        tempCodeRunnerFile.h )

add_executable(SortingAlgorithmsAssignment AssignmentCode/SortingAlgorithmsFunctions.cpp AssignmentCode/SortingAlgorithmsMain.cpp AssignmentCode/SortingAlgorithmsHeader.h)
