cmake_minimum_required(VERSION 3.13)
project(sorting_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(sorting_cpp main.cpp BubbleSort.h SortTestHelper.h ShellSort.h ShakerSort.h InsertSort.h SelectionSort.h MergeSort.h MergeSortBottomUp.h MergeSortBasic.h QuickSortBasic.h)