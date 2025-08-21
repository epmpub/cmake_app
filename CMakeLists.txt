cmake_minimum_required(VERSION 3.10.0)
project(demo VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(spdlog CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)

add_executable(demo main.cpp)

target_link_libraries(demo PRIVATE fmt::fmt spdlog::spdlog)
