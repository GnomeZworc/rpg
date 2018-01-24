cmake_minimum_required (VERSION 3.5)

project (RPG)

set(EXECUTABLE_OUTPUT_PATH "Game")

set(sources
  Sources/main.cpp)

add_executable(RPG
  ${sources})
