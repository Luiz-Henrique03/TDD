#include "/home/luiz/Money_C++/Main/lib/Bank.h"
#include "/home/luiz/Money_C++/Main/lib/Money.h"
#include "/home/luiz/Money_C++/Main/lib/Expression.h"
#include "/home/luiz/Money_C++/Main/lib/Sum.h"
#include <iostream>

using namespace std;

int main(){
    Money* money = new Money();
    Money* five = money->dolar(5);
    Money* ten = money->franc(10);
    Bank* bank = new Bank();
    bank->addRate("CHF","USD",2);
    Expression* sum = (new Sum(five, ten));
    Money* result = bank->reduce(sum,"USD");
    cout<< result->Amount <<endl;
    cout<< result->currency() <<endl;
    delete (five,ten,bank,money);
     
}