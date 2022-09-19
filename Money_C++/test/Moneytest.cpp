#include <gtest/gtest.h>
#include "/home/luiz/TDD/Money_C++/main/Money.h"
#include "/home/luiz/TDD/Money_C++/main/Expression.h"
#include "/home/luiz/TDD/Money_C++/main/Bank.h"
#include "/home/luiz/TDD/Money_C++/main/Sum.h"


TEST(TestMultiplication, DollarMultiplicacao){
  Money five = five.dollar(5);
  EXPECT_EQ(five.dollar(10), five.Times(2));
}


TEST(TestSimpleAddition, TestSimpleAddition){
  Money* money = new Money();
  Money five = five.dollar(5);
  Expression* sum = five.plus(five);
  Bank* bank = new Bank();
  Money reduce = bank->Reduce(*sum,"USD");
  EXPECT_EQ(money->dollar(5), reduce);
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



TEST(testSumPlusMoney, testSumPlusMoney){
  Money* money = new Money(); 
  Expression fiveBucks = money->dollar(5);
  Expression tenBucks = money->franc(10);
  Bank* bank = new Bank();
  bank->addRate("USD","CHF",2);
  Expression* sum = new Sum(fiveBucks,tenBucks);
  Money result = bank->Reduce(*sum,"USD");
  EXPECT_EQ(money->dollar(15),result);
}



