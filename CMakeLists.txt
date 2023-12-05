cmake_minimum_required(VERSION 3.26)
project("ExamenTema3")

set(CMAKE_CXX_STANDARD 17)


add_executable(Ejercicio1
        Ejercicio1/main.cpp
        Ejercicio1/enviroment.cpp
        Ejercicio1/enviroment.h
        Ejercicio1/variant.h
)

add_executable(Ejercicio2
        Ejercicio2/main.cpp
        Ejercicio2/variant.h
        Ejercicio2/enviroment.cpp
        Ejercicio2/enviroment.h
)

add_executable(Ejercicio3
        Ejercicio3/main.cpp
        Ejercicio3/variant.h
        Ejercicio3/enviroment.cpp
        Ejercicio3/enviroment.h
)

add_executable(Ejercicio4
        Ejercicio4/main.cpp
        Ejercicio4/variant.h
        Ejercicio4/enviroment.cpp
        Ejercicio4/enviroment.h
)
