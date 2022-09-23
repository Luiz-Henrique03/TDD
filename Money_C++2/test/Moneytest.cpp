#include <gtest/gtest.h>
#include "/home/luiz/Money_C++/Main/lib/Money.h"
#include "/home/luiz/Money_C++/Main/lib/Dolar.h"

TEST(Sum, SumWithIntegers){
    Dolar* Dfive = new Dolar();
    Money* Mfive = new Money();

    Dfive->Amount = 5;
    Mfive->Amount = 5;

    EXPECT_EQ((Dfive->Amount),(Mfive->Amount));

    
}