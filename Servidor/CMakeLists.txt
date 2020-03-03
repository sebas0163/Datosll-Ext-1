cmake_minimum_required(VERSION 3.5)

project(Servidor LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5Core)

add_executable(Servidor
  main.cpp
  Lista.hpp
  Nodo.hpp

  grafo.hpp

)
target_link_libraries(Servidor Qt5::Core)
