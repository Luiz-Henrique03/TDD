add_test( Multiplicacao.TestDolarMultiplicacao [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=Multiplicacao.TestDolarMultiplicacao]==] --gtest_also_run_disabled_tests)
set_tests_properties( Multiplicacao.TestDolarMultiplicacao PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
add_test( Multiplicacao.TestfrancMultiplicacao [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=Multiplicacao.TestfrancMultiplicacao]==] --gtest_also_run_disabled_tests)
set_tests_properties( Multiplicacao.TestfrancMultiplicacao PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
add_test( TestEquality.EqualityBetweenCoins [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=TestEquality.EqualityBetweenCoins]==] --gtest_also_run_disabled_tests)
set_tests_properties( TestEquality.EqualityBetweenCoins PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
set( money_test_TESTS Multiplicacao.TestDolarMultiplicacao Multiplicacao.TestfrancMultiplicacao TestEquality.EqualityBetweenCoins)
