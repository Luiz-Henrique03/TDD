#include "Bank.hpp"
#include "Expression.hpp"
#include "Money.hpp"
#include "Pair.hpp"
#include "Sum.hpp"

using namespace std;

int main(){
    Money* money = new Money();
    Money five = money->dollar(5);
    Money ten = money->dollar(10);
    Bank* bank = new Bank();
    bank->addRate("CHF", "USD", 2);
    Expression* sum = new Sum(five, ten)->plus(five);
    Money result = bank->reduce(sum, "USD");
    cout << result << endl;


    return 0;
}