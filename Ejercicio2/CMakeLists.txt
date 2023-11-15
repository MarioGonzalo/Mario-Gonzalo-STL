cmake_minimum_required(VERSION 3.26)
project(Ejercicio2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Ejercicio2 main.cpp
        circulo.cpp
        triangulo.cpp
        rombo.cpp
        cuadrado.cpp
        rectangulo.cpp
        Geometria.h
)
