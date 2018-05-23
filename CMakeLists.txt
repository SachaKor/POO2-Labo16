cmake_minimum_required(VERSION 3.8)
project(POO2_Labo16)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Bank.cpp
        Bank.h
        Boat.cpp
        Boat.h
        Container.cpp
        Container.h
        Controller.cpp
        Controller.h
        main.cpp
        Person.cpp
        Person.h
        Role.cpp
        Role.h)

add_executable(POO2_Labo16 main.cpp)