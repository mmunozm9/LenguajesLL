cmake_minimum_required(VERSION 3.24)
project(proyecto1)

set(CMAKE_CXX_STANDARD 20)

add_executable(proyecto1 main.cpp Habitacion.cpp Habitacion.h Nodo.cpp Nodo.h Lista.cpp Lista.h)
