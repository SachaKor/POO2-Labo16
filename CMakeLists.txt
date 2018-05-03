cmake_minimum_required(VERSION 3.8)
project(POO2_Labo16)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Container.cpp Container.h Person.cpp Person.h Controller.cpp Controller.h)
add_executable(POO2_Labo16 ${SOURCE_FILES})