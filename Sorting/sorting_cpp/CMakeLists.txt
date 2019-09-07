cmake_minimum_required(VERSION 3.13)
project(sorting_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(sorting_cpp main.cpp BubbleSort.cpp BubbleSort.h SortTestHelper.h ShellSort.h ShakerSort.h InsertSort.h SelectionSort.h)