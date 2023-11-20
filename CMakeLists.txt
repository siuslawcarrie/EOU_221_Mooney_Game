cmake_minimum_required(VERSION 3.26)
project(EOU_221_Mooney_game)

set(CMAKE_CXX_STANDARD 17)

add_executable(EOU_221_Mooney_game main.cpp
        Functions.hpp
        validation_functions.hpp
        program_functions.hpp
        program_functions.cpp)
