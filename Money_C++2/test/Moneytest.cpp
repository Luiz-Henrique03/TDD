#include <gtest/gtest.h>
#include "/home/luiz/Money_C++/Main/lib/Money.h"
#include "/home/luiz/Money_C++/Main/lib/Dolar.h"
#include "/home/luiz/Money_C++/Main/lib/Franc.h"


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
    ASSERT_TRUE((money->franc(5)->Equals(money->franc(5))));
    ASSERT_FALSE((money->franc(5))->Equals(money->franc(6)));
  //ASSERT_FALSE((money->dolar(5))->Equals(money->franc(5)));
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
    ASSERT_FALSE((new Money(10,"CHF"))->Equals(new Franc(10,"CHF"))); // Arrumar EQUALS
}

