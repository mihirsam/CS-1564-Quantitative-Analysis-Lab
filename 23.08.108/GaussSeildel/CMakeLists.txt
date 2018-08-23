cmake_minimum_required(VERSION 3.12)
project(GaussSeildel C)

set(CMAKE_C_STANDARD 99)

add_executable(GaussSeildel main.c)
target_link_libraries(GaussSeildel C m)