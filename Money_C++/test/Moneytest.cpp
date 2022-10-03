#include <gtest/gtest.h>
#include "/home/luiz/Money_C++/Main/lib/Money.h"
#include "/home/luiz/Money_C++/Main/lib/Bank.h"
#include "/home/luiz/Money_C++/Main/lib/Expression.h"



TEST(Multiplicacao, TestDolarMultiplicacao){
    Money* money = new Money();
    Money* five = money->dolar(5);
    Money* product = five->times(2);
    EXPECT_EQ((money->dolar(10))->Amount,product->Amount);
    product = five->times(3);
    EXPECT_EQ((money->dolar(15))->Amount,product->Amount);
}

TEST(TestEquality, EqualityBetweenCoins){

    Money* money = new Money();
   
    ASSERT_TRUE((money->dolar(5))->Equals(money->dolar(5)));
    ASSERT_FALSE((money->dolar(5))->Equals(money->dolar(6)));
    ASSERT_FALSE((money->dolar(5))->Equals(money->franc(5)));
}

TEST(Multiplicacao, TestFrancMultiplicacao){
    Money* money = new Money();
    Money* five = money->franc(5);
    Money* Product = five->times(2);
    EXPECT_EQ((money->franc(10))->Amount,Product->Amount);
    Product = five->times(3);
    EXPECT_EQ((money->franc(15))->Amount,Product->Amount);
}


TEST(TestCurrency, CheckCoinType){
    Money* money = new Money();
    EXPECT_EQ("USD",money->dolar(1)->currency());
    EXPECT_EQ("CHF",money->franc(1)->currency()); 
}


TEST(TestDifferentClassEquality, DifferentClassEquality){
    Money* money = new Money();
    ASSERT_TRUE((new Money(10,"CHF"))->Equals((new Money())->franc(10))); 
}


TEST(TestSimpleAddition, SimpleAddition){
    Money* money = new Money();
    Money* five = money->dolar(5);
    Expression* sum = five->plus(five);
    Bank* bank = new Bank();
    Money* reduced = bank->reduce(sum,"USD");
    EXPECT_EQ(money->dolar(10)->Amount,reduced->Amount);

}

/*
TEST(TestPlusReturnsSum, ReturnsSum){
    Money* money = new Money();
    Money* five = money->dolar(5);
    Expression* result = five->plus(five);
    Sum* sum = (Sum*) result;
    EXPECT_EQ(five,sum->augend);
    EXPECT_EQ(five,sum->addend);
}

TEST(TestReduceSum, TestReduceSum){
    Money* money = new Money();
    Expression* sum = new Sum(money->dolar(3), money->dolar(4));
    Bank* bank = new Bank();
    Money* result = bank->reduce(sum,"USD");
    EXPECT_EQ((money->dolar(7))->Amount,result->Amount); 
}


TEST(testReduceMoney, ReduceMoney){
    Bank* bank = new Bank();
    Money* money = new Money();
    Expression* sum = new Sum(money->dolar(1), money->dolar(0));
    Money* result = bank->reduce(sum,"USD");
    EXPECT_EQ(money->dolar(1)->Amount,result->Amount);
}
*/