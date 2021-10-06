cmake_minimum_required(VERSION 3.20)
project(cppPro)

set(CMAKE_CXX_STANDARD 14)

add_executable(cppPro main.cpp)

ADD_SUBDIRECTORY(01_basicGrammer)

include_directories("/cppPro") #换成头文件所在目录