cmake_minimum_required(VERSION 3.6)
project(StateMachine)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

set(SOURCE_FILES main.cpp)
add_executable(StateMachine ${SOURCE_FILES})


set(SOURCE_FILES_TEST test.cpp)
add_executable(Test ${SOURCE_FILES_TEST})
