cmake_minimum_required(VERSION 3.20)
project(ArrayDeque)

set(CMAKE_CXX_STANDARD 14)

add_executable(ArrayDeque main.cpp AbstractContainer.h ArrayDeque.cpp ArrayDeque.h AbstractDeque.h AbstractIterator.h QueueIterator.cpp QueueIterator.h)
