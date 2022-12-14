add_test( Multiplicacao.TestDolarMultiplicacao [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=Multiplicacao.TestDolarMultiplicacao]==] --gtest_also_run_disabled_tests)
set_tests_properties( Multiplicacao.TestDolarMultiplicacao PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
add_test( Multiplicacao.TestFrancMultiplicacao [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=Multiplicacao.TestFrancMultiplicacao]==] --gtest_also_run_disabled_tests)
set_tests_properties( Multiplicacao.TestFrancMultiplicacao PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
add_test( TestEquality.EqualityBetweenCoins [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=TestEquality.EqualityBetweenCoins]==] --gtest_also_run_disabled_tests)
set_tests_properties( TestEquality.EqualityBetweenCoins PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
add_test( TestCurrency.CheckCoinType [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=TestCurrency.CheckCoinType]==] --gtest_also_run_disabled_tests)
set_tests_properties( TestCurrency.CheckCoinType PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
add_test( TestDifferentClassEquality.DifferentClassEquality [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=TestDifferentClassEquality.DifferentClassEquality]==] --gtest_also_run_disabled_tests)
set_tests_properties( TestDifferentClassEquality.DifferentClassEquality PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
add_test( TestSimpleAddition.SimpleAddition [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=TestSimpleAddition.SimpleAddition]==] --gtest_also_run_disabled_tests)
set_tests_properties( TestSimpleAddition.SimpleAddition PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
add_test( TestPlusReturnsSum.ReturnsSum [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=TestPlusReturnsSum.ReturnsSum]==] --gtest_also_run_disabled_tests)
set_tests_properties( TestPlusReturnsSum.ReturnsSum PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
add_test( TestReduceSum.TestReduceSum [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=TestReduceSum.TestReduceSum]==] --gtest_also_run_disabled_tests)
set_tests_properties( TestReduceSum.TestReduceSum PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
add_test( testReduceMoney.ReduceMoney [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=testReduceMoney.ReduceMoney]==] --gtest_also_run_disabled_tests)
set_tests_properties( testReduceMoney.ReduceMoney PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
add_test( testReduceMoneyDifferentCurrency.ReduceMoneyDifferentCurrency [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=testReduceMoneyDifferentCurrency.ReduceMoneyDifferentCurrency]==] --gtest_also_run_disabled_tests)
set_tests_properties( testReduceMoneyDifferentCurrency.ReduceMoneyDifferentCurrency PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
add_test( TestArrayEquals.ArrayEquals [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=TestArrayEquals.ArrayEquals]==] --gtest_also_run_disabled_tests)
set_tests_properties( TestArrayEquals.ArrayEquals PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
add_test( testIdentityRate.IdentityRate [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=testIdentityRate.IdentityRate]==] --gtest_also_run_disabled_tests)
set_tests_properties( testIdentityRate.IdentityRate PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
add_test( testMixedAddition.MixedAdditon [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=testMixedAddition.MixedAdditon]==] --gtest_also_run_disabled_tests)
set_tests_properties( testMixedAddition.MixedAdditon PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
add_test( testSumPlusMoney.SumPlusMoney [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=testSumPlusMoney.SumPlusMoney]==] --gtest_also_run_disabled_tests)
set_tests_properties( testSumPlusMoney.SumPlusMoney PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
add_test( testSumTimesMoney.SumTimesMoney [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=testSumTimesMoney.SumTimesMoney]==] --gtest_also_run_disabled_tests)
set_tests_properties( testSumTimesMoney.SumTimesMoney PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
add_test( testPlusSameCurrency.PlusSameCurrency [==[/home/luiz/Money_C++/test/money_test]==] [==[--gtest_filter=testPlusSameCurrency.PlusSameCurrency]==] --gtest_also_run_disabled_tests)
set_tests_properties( testPlusSameCurrency.PlusSameCurrency PROPERTIES WORKING_DIRECTORY [==[/home/luiz/Money_C++/test]==])
set( money_test_TESTS Multiplicacao.TestDolarMultiplicacao Multiplicacao.TestFrancMultiplicacao TestEquality.EqualityBetweenCoins TestCurrency.CheckCoinType TestDifferentClassEquality.DifferentClassEquality TestSimpleAddition.SimpleAddition TestPlusReturnsSum.ReturnsSum TestReduceSum.TestReduceSum testReduceMoney.ReduceMoney testReduceMoneyDifferentCurrency.ReduceMoneyDifferentCurrency TestArrayEquals.ArrayEquals testIdentityRate.IdentityRate testMixedAddition.MixedAdditon testSumPlusMoney.SumPlusMoney testSumTimesMoney.SumTimesMoney testPlusSameCurrency.PlusSameCurrency)
