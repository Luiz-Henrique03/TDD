#include "/home/luiz/Money_C++2/Main/lib/Bank.h"
#include "/home/luiz/Money_C++2/Main/lib/Money.h"
#include "/home/luiz/Money_C++2/Main/lib/Expression.h"
#include "/home/luiz/Money_C++2/Main/lib/Sum.h"
#include <iostream>

using namespace std;

int main(){
    Money* money = new Money();

    Money  *five = money->dolar(5),
           *ten = money->franc(10),
           *result = 0;

    delete(money);

    Bank* bank = new Bank();

    bank->addRate("CHF","USD",2);
    Expression* sum = (new Sum(five, ten));
    result = bank->reduce(sum,"USD");
    delete(bank);
    delete(five,ten);
    delete(sum);
    cout << result->toString() << endl;
    delete(result);

    return 0;
}