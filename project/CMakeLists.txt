cmake_minimum_required (VERSION 3.5)

project (RPG)

set (EXECUTABLE_OUTPUT_PATH "../Game/")

include_directories(
  Sources/Config
  Sources/Files
  Sources/Gestion
  Sources/Gestion/listRace
)

set(sources
  Sources/main.cpp
  Sources/Config/Config.cpp
  Sources/Gestion/Gestion.cpp
  Sources/Gestion/listRace/listRace.cpp
  )

add_executable(RPG
  ${sources})
