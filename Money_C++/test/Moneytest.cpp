#include <gtest/gtest.h>
#include "/home/luiz/TDD/Money_C++/main/lib/Money.h"
#include "/home/luiz/TDD/Money_C++/main/lib/Expression.h"
#include "/home/luiz/TDD/Money_C++/main/lib/Bank.h"
#include "/home/luiz/TDD/Money_C++/main/lib/Sum.h"


TEST(TestMultiplication, MoneyMultiplication){
  Money* money = new Money();
  Money* five = money->dollar(5);
  EXPECT_EQ(*(money->dollar(10)), *(five->Times(2)));
}



int main(int argc, char **argv){
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}


