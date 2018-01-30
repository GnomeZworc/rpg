cmake_minimum_required (VERSION 3.5)

project (RPG)

set (CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_FLAGS "-Wall -Wextra -g3")

add_subdirectory(./project/)
add_subdirectory(./test/)
