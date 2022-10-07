cmake_minimum_required(VERSION 3.14)
project(GTest)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

include(FetchContent)

add_executable(
  Test
  Bank.cpp
  Money.cpp
  Sum.cpp
  Pair.cpp
  Expression.cpp
  Main.cpp
)
target_link_libraries(
  Test
)