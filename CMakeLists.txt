cmake_minimum_required(VERSION 3.25)
project(periodic_table_of_elements)

set(CMAKE_CXX_STANDARD 17)

add_executable(periodic_table_of_elements
        main.cpp menu.h menu.cpp functions.cpp functions.h classes.cpp classes.h rapidcsv.h)
