cmake_minimum_required(VERSION 3.10.0)
project(demo VERSION 0.1.0 LANGUAGES C CXX)

find_package(spdlog CONFIG REQUIRED)

add_executable(demo main.cpp)

target_link_libraries(
    demo PRIVATE fmt
    
)

target_link_libraries(
    demo PRIVATE spdlog::spdlog
)