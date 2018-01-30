file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(unit_test ${SRCS})

target_link_libraries(unit_test libgtest libgmock)

add_test(NAME unit_test
  COMMAND unit_test)
