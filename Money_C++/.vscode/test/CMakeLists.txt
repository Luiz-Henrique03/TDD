cmake_minimum_required(VERSION 3.11)
project(tdd-book)

set(CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(inc)

include(CTest)
if(BUILD_TESTING)
    enable_testing()
    
    # download googltest. Requires CMake 3.11+
    include(FetchContent)

    FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.12.1
    )

    FetchContent_GetProperties(googletest)
    if(NOT googletest_POPULATED)
        FetchContent_Populate(googletest)
        add_subdirectory(
            ${googletest_SOURCE_DIR} 
            ${googletest_BINARY_DIR}
        )
    endif()


    add_executable(
        money_test 
        Moneytest.cpp
        /home/luiz/Money_C++/Main/src/Bank.cpp
        /home/luiz/Money_C++/Main/src/Money.cpp
        /home/luiz/Money_C++/Main/src/Sum.cpp
    ) # add this executable
    
    target_link_libraries(
        money_test 
        GTest::gtest_main
    ) # link google test to this executable

    include(GoogleTest)
    gtest_discover_tests(money_test)
endif()