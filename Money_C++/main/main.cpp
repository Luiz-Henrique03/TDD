#include "Bank.h"
#include "Expression.h"
#include "Money.h"
#include "Pair.h"
#include "Sum.h"
#include <iostream>

using namespace std;

int main(){
    Money* money = new Money();
    Money five = money->dollar(5);
    Money ten = money->dollar(10);
    Bank* bank = new Bank();
    bank->addRate("CHF", "USD", 2);
    Expression* sum = new Sum(five, ten);
    sum->plus(five);
    Money result = bank->Reduce(*sum, "USD");
    printf("%d",result);


    return 0;
}