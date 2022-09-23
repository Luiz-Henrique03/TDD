add_test( Sum.SumWithIntegers [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=Sum.SumWithIntegers]==] --gtest_also_run_disabled_tests)
set_tests_properties( Sum.SumWithIntegers PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
set( money_test_TESTS Sum.SumWithIntegers)
