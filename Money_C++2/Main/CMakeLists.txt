cmake_minimum_required(VERSION 3.14)
project(GTest)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)


include_directories(inc)


add_executable(
  Test
  Main.cpp
  src/Bank.cpp
  src/Money.cpp
  src/Sum.cpp
  src/Pair.cpp
  src/Expression.cpp
)
target_link_libraries(
  Test
)