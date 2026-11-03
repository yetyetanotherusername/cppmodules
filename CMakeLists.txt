cmake_minimum_required(VERSION 4.3)

set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "451f2fe2-a8a2-47c3-bc32-94786d8fc91b")

project(hello_world)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_MODULE_STD ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(hello_world)
target_sources(
  hello_world
  PRIVATE src/main.cpp
  PUBLIC
  FILE_SET my_modules TYPE CXX_MODULES FILES src/Hello.cxx src/World.cxx)
