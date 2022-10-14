#include <gtest/gtest.h>
#include "/home/luiz/Money_C++2/Main/lib/Money.h"
#include "/home/luiz/Money_C++2/Main/lib/Bank.h"
#include "/home/luiz/Money_C++2/Main/lib/Expression.h"
#include "/home/luiz/Money_C++2/Main/lib/Sum.h"


using namespace std;

TEST(Multiplicacao, TestDolarMultiplicacao){
    Money* money = new Money();
    Money* five = money->dolar(5);
    Money* product = five->times(2);
    delete(five);
    EXPECT_EQ((money->dolar(10))->getAmount(),product->getAmount());
    product = five->times(3);
    EXPECT_EQ((money->dolar(15)->getAmount()),product->getAmount());
    delete(money,product);

}


TEST(TestEquality, EqualityBetweenCoins){

    Money* money = new Money();
   
    ASSERT_TRUE((money->dolar(5))->Equals(money->dolar(5)));
    ASSERT_FALSE((money->dolar(5))->Equals(money->dolar(6)));
    ASSERT_FALSE((money->dolar(5))->Equals(money->franc(5)));
    delete(money);
}

TEST(Multiplicacao, TestFrancMultiplicacao){
    Money* money = new Money();
    Money* five = money->franc(5);
    Money* Product = five->times(2);
    EXPECT_EQ((money->franc(10))->getAmount(),Product->getAmount());
    Product = five->times(3);
    EXPECT_EQ((money->franc(15))->getAmount(),Product->getAmount());
    delete(money,five,Product);
}


TEST(TestCurrency, CheckCoinType){
    Money* money = new Money();
    EXPECT_EQ("USD",money->dolar(1)->currency());
    EXPECT_EQ("CHF",money->franc(1)->currency());
    delete(money); 
}


TEST(TestDifferentClassEquality, DifferentClassEquality){
    Money* money = new Money();
    ASSERT_TRUE((new Money(10,"CHF"))->Equals((new Money())->franc(10)));
    delete(money); 
}


TEST(TestSimpleAddition, SimpleAddition){
    Money* money = new Money();
    Money* five = money->dolar(5);
    Expression* sum = five->plus(five);
    Bank* bank = new Bank();
    Money* reduced = bank->reduce(sum,"USD");
    EXPECT_EQ(money->dolar(10)->getAmount(),reduced->getAmount());
    delete(money,five,sum,bank,reduced);
}

TEST(TestPlusReturnsSum, ReturnsSum){
    Money* money = new Money();
    Money* five = money->dolar(5);
    Expression* result = five->plus(five);
    Sum* sum = (Sum*) result;
    EXPECT_EQ(five,sum->augend);
    EXPECT_EQ(five,sum->addend);
    delete(money,five,result,sum);
}

TEST(TestReduceSum, TestReduceSum){
    Money* money = new Money();
    Expression* sum = new Sum(money->dolar(3), money->dolar(4));
    Bank* bank = new Bank();
    Money* result = bank->reduce(sum,"USD");
    EXPECT_EQ((money->dolar(7))->getAmount(),result->getAmount());
    delete(money,sum,bank,result);
}

TEST(testReduceMoney, ReduceMoney){
    Bank* bank = new Bank();
    Money* money = new Money();
    Expression* sum = new Sum(money->dolar(1), money->dolar(0));
    Money* result = bank->reduce(sum,"USD");
    EXPECT_EQ(money->dolar(1)->getAmount(),result->getAmount());
    delete(bank,money,sum,result);
}


TEST(testReduceMoneyDifferentCurrency,ReduceMoneyDifferentCurrency){
    Bank* bank = new Bank();
    Money* money = new Money();
    bank->addRate("CHF","USD",2);
    Money* result = bank->reduce(money->franc(2),"USD");
    EXPECT_EQ(money->dolar(1)->getAmount(),result->getAmount());
    delete(bank,money,result);
}

TEST(TestArrayEquals,ArrayEquals){
    string test1[1] = {"abc"};
    string test2[1] = {"abc"};
    EXPECT_EQ(*test1,*test2);
}

TEST(testIdentityRate, IdentityRate){
    EXPECT_EQ(1, (new Bank())->Rate("USD","USD"));
}


TEST(testMixedAddition, MixedAdditon){
    Money* money = new Money();
    Money* fiveBucks = money->dolar(5);
    Money* tenFrancs = money->franc(10);
    Bank* bank = new Bank();
    bank->addRate("CHF","USD",2);
    Money* result = bank->reduce(fiveBucks->plus(tenFrancs),"USD");
    EXPECT_EQ(money->dolar(15)->getAmount(),result->getAmount());
    delete(money,fiveBucks,tenFrancs,bank,result);
}

TEST(testSumPlusMoney, SumPlusMoney){
    Money* money = new Money();
    Money* fiveBucks = money->franc(5);
    Money* tenFrancs = money->franc(10);
    Bank* bank = new Bank();
    bank->addRate("CHF","USD",2);
    Expression* sum = (new Sum(fiveBucks,tenFrancs))->plus(fiveBucks);
    Money* result = bank->reduce(fiveBucks->plus(tenFrancs),"USD");
    EXPECT_EQ(money->dolar(15)->getAmount(), result->getAmount());
    delete(money,fiveBucks,tenFrancs,bank,sum,result);
}

TEST(testSumTimesMoney, SumTimesMoney){
    Money* money = new Money();
    Money* fiveBucks = money->franc(5);
    Money* tenFrancs = money->franc(10);
    Bank* bank = new Bank();
    bank->addRate("CHF","USD",2);
    Expression* sum = (new Sum(fiveBucks,tenFrancs))->times(2);
    Money* result = bank->reduce(fiveBucks->plus(tenFrancs),"USD");
    EXPECT_EQ(money->dolar(15)->getAmount(), result->getAmount());
    delete(money,fiveBucks,tenFrancs,bank,sum,result);
}

TEST(testPlusSameCurrency, PlusSameCurrency){
    Money* money = new Money();
    Expression*  sum = money->dolar(1)->plus(money->dolar(1));
    ASSERT_TRUE((is_base_of<Expression,Money>::value));
    delete(money,sum);
}