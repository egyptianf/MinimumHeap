cmake_minimum_required(VERSION 3.12)
project(minHeaps)

set(CMAKE_CXX_STANDARD 14)

add_executable(minHeaps main.cpp MinHeap.cpp MinHeap.h Node.cpp Node.h)