cmake_minimum_required(VERSION 3.14)
project(GTest)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

include_directories(/home/luiz/Money_C++2/Main/inc)
# include_directories(inc)


add_executable(
  Test
  Main.cpp
  Bank.cpp
  Money.cpp
  Sum.cpp
  Pair.cpp
  Expression.cpp
)
target_link_libraries(
  Test
)