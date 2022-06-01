cmake_minimum_required(VERSION 3.22)
project(persons)

set(CMAKE_CXX_STANDARD 14)

add_executable(persons main.cpp Person.h IName.h IAddress.h IToString.h ToFile.h Student.h Teacher.h)
