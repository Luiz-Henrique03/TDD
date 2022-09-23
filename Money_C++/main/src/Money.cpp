#include "/home/luiz/TDD/Money_C++/main/lib/Expression.h"
#include "/home/luiz/TDD/Money_C++/main/lib/Sum.h"
#include "/home/luiz/TDD/Money_C++/main/lib/Money.h"
#include <string>
#include "/home/luiz/TDD/Money_C++/main/lib/Bank.h"

using namespace std;

Money::Money(int amount, string currency) {
    this->amount = amount;
    this->currency = currency;
}

Money::Money() {

}

Money* Money::dollar(int amount) {
    return new Money(amount, "USD");
}

Money* Money::franc(int amount) {
    return new Money(amount, "CHF");
}

Expression* Money::Times(int multiplier) {
    return new Money(amount * multiplier, currency);
}

Expression* Money::plus(Expression addend){
    return new Sum(addend, addend);
}


string Money::Currency() {
    return this->currency;
}

Money Money::Reduce(Bank* bank, string to) {
    int rate = bank->rate(currency, to);
    return Money(amount / rate, to);
}