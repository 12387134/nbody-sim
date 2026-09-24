cmake_minimum_required(VERSION 3.20)

project(nbody-sim)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SDL3 REQUIRED CONFIG)

add_executable(nbody-sim
    src/main.cpp
    src/physics.cpp
    src/renderer.cpp
    src/body.cpp
)

target_link_libraries(nbody-sim PRIVATE SDL3::SDL3)
target_include_directories(nbody-sim PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
