cmake_minimum_required(VERSION 3.0)
project(DataStruct)

set(CMAKE_CXX_STANDARD 14)

add_executable(BubblingSort BubblingSort.c)
add_executable(QuickSort QuickSort.cpp)
add_executable(InsertionSort InsertionSort.c)
add_executable(MergeSort MergeSort.cpp)
add_executable(SelectionSort SelectionSort.cpp)
add_executable(HeapSort HeapSort.cpp)