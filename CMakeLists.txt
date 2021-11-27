cmake_minimum_required(VERSION 3.0)
project(DataStruct)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStruct main.cpp)
#add_executable(Sort *.cpp)

#ADD_SUBDIRECTORY(Sort Floyd)

add_executable(BubblingSort ./Sort/BubblingSort.c)
add_executable(QuickSort ./Sort/QuickSort.cpp)
add_executable(InsertionSort ./Sort/InsertionSort.c)
add_executable(MergeSort ./Sort/MergeSort.cpp)
add_executable(SelectionSort ./Sort/SelectionSort.cpp)
add_executable(HeapSort Sort/HeapSort.c)
add_executable(TSP ShortestPath/Floyd/TSP.cpp ShortestPath/Dijkstra.cpp)
add_executable(Dijkstra ShortestPath/Dijkstra.cpp)
add_executable(ShellSort Sort/ShellSort.c)