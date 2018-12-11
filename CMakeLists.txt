cmake_minimum_required(VERSION 3.7.0)
project(Caclulator C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")

set(SOURCE_FILES1 main_menu.c calc_library.c calc_library.h)
add_executable(main_menu ${SOURCE_FILES1})
