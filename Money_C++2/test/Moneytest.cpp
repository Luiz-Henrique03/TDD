#include <gtest/gtest.h>
#include "/home/luiz/Money_C++/Main/lib/Money.h"
#include "/home/luiz/Money_C++/Main/lib/Dolar.h"
#include "/home/luiz/Money_C++/Main/lib/Franc.h"


TEST(Multiplicacao, TestDolarMultiplicacao){
    Dolar* five = new Dolar(5);
    Dolar* Product = five->times(2);
    EXPECT_EQ((new Dolar(10))->Amount,Product->Amount);
    Product = five->times(3);
    EXPECT_EQ((new Dolar(15))->Amount,Product->Amount);
}

TEST(TestEquality, EqualityBetweenCoins){
   
    ASSERT_TRUE((new Dolar(5))->Equals(new Dolar(5)));
    ASSERT_FALSE((new Dolar(5))->Equals(new Dolar(6)));
    ASSERT_TRUE((new Franc(5))->Equals(new Franc(5)));
    ASSERT_FALSE((new Franc(5))->Equals(new Franc(6)));
    ASSERT_FALSE((new Franc(5))->Equals(new Dolar(5)));
}

TEST(Multiplicacao, TestfrancMultiplicacao){
    Franc* five = new Franc(5);
    Franc* Product = five->times(2);
    EXPECT_EQ((new Franc(10))->Amount,Product->Amount);
    Product = five->times(3);
    EXPECT_EQ((new Franc(15))->Amount,Product->Amount);
}