#include <gtest/gtest.h>
#include "/home/luiz/TDD/TDD/Money_C++/main/Money.hpp"
#include "/home/luiz/TDD/TDD/Money_C++/main/Expression.hpp"
#include "/home/luiz/TDD/TDD/Money_C++/main/Bank.hpp"
#include "/home/luiz/TDD/TDD/Money_C++/main/Sum.hpp"


TEST(TestMultiplication, DollarMultiplicacao){
  Money five = five.dollar(5);
  EXPECT_EQ(five.dollar(10), five.Times(2));
}

TEST(TestEquality, CompareDollarFranc){
  Money five = five.dollar(5);
  Money fiveFranc = fiveFranc.franc(5);
  EXPECT_TRUE(five.dollar(5).equals(five.dollar(5)));
}

TEST(TestCurrency, TestCurrency){
  Money* money = new Money();
  EXPECT_EQ("USD",money->dollar(1).Currency());
}

TEST(TestSimpleAddition, TestSimpleAddition){
  Money* money = new Money();
  Money five = five.dollar(5);
  Expression sum = five.plus(five);
  Bank* bank = new Bank();
  Money reduce = bank->Reduce(sum,"USD");
  EXPECT_EQ(money->dollar(5), reduce);
}

TEST(TestPlusReturnsSum, TestPlusReturnsSum){
  Money* money = new Money();
  Expression five = money->dollar(5);
  Expression result = five.plus(five);
  Sum sum = (Sum) result;
  EXPECT_EQ(five, sum.augend);
  EXPECT_EQ(five, sum.addend);
}

TEST(TestReduceSum, TestReduceSum){
  Money* money = new Money();
  Expression* sum = new Sum(money->dollar(3), money->dollar(4));
  Bank* bank = new Bank();
  Money result = bank->Reduce(*sum, "USD");
  EXPECT_EQ(money->dollar(5), result);
}

TEST(TestReduceMoney, TestReduceMoney){
  Money* money = new Money(); 
  Bank* bank = new Bank();
  Money result = bank->Reduce(money->dollar(1),"USD");
  EXPECT_EQ(money->dollar(1), result);
}

 TEST(testReduceMoneyDifferentCurrency,testReduceMoneyDifferentCurrency) {
  Bank* bank = new Bank();
  Money* money = new Money();
  bank->addRate("CHF","USD", 2);
  Money result = bank->Reduce(money->franc(2), "USD");
  EXPECT_EQ(money->dollar(1), result);
}

TEST(testRate, testRate){
  EXPECT_EQ(1, new Bank()->rate("USD","USD"));
}

TEST(testMixedAddition,testMixedAddition){
  Money* money = new Money();
  Expression fiveBucks = money->dollar(5);
  Expression tenBucks = money->franc(10);
  Bank* bank = new Bank();
  bank->addRate("CHF","USD",2);
  Money result = bank->Reduce(fiveBucks.plus(tenBucks),"USD");
  EXPECT_EQ(money->dollar(10),result);
}

TEST(testSumPlusMoney, testSumPlusMoney){
  Money* money = new Money(); 
  Expression fiveBucks = money->dollar(5);
  Expression tenBucks = money->franc(10);
  Bank* bank = new Bank();
  bank->addRate("USD","CHF",2);
  Expression sum = new Sum(fiveBucks,tenBucks)->plus(fiveBucks);
  Money result = bank->Reduce(sum,"USD");
  EXPECT_EQ(money->dollar(15),result);
}

TEST(testSumTimesMoney, testSumTimesMoney){
  Money* money = new Money(); 
  Expression fiveBucks = money->dollar(5);
  Expression tenBucks = money->franc(10);
  Bank* bank = new Bank();
  bank->addRate("USD","CHF",2);
  Expression sum = new Sum(fiveBucks,tenBucks)->Times(fiveBucks);
  Money result = bank->Reduce(sum,"USD");
  EXPECT_EQ(money->dollar(15),result);
}

TEST(testPlusSameCurrencyReturnsMoney,testPlusSameCurrencyReturnsMoney){
  Money* money = new Money();
  Expression sum = money->dollar(5).plus(money->dollar(1));
  EXPECT_TRUE(sum is_base_of money);
}