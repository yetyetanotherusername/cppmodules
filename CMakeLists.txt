cmake_minimum_required (VERSION 3.28)

set (CMAKE_CXX_STANDARD 20)
set (CMAKE_EXPORT_COMPILE_COMMANDS ON)

project (hello_world)

add_executable (hello_world src/main.cpp)
target_sources (
    hello_world
    PUBLIC FILE_SET
           my_modules
           TYPE
           CXX_MODULES
           FILES
           src/Hello.cxx
           src/World.cxx
)
