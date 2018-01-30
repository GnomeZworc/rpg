cmake_minimum_required (VERSION 3.5)

project (RPG)

set(EXECUTABLE_OUTPUT_PATH "./Game/")
set (CMAKE_CXX_STANDARD 11)

set(sources
  Sources/main.cpp
  Sources/Config/Config.cpp
  Sources/Gestion/Gestion.cpp)

add_executable(RPG
  ${sources})
