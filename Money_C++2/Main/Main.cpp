#include "Bank.h"
#include "Money.h"
#include "Expression.h"
#include "Sum.h"
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
    delete(five);
    delete(ten);
    delete(sum);
    cout << result->toString() << endl;
    delete(result);

    return 0;
}