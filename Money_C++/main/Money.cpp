#include "Expression.h"
#include "Sum.h"
#include "Money.h"
#include <string>
#include "Bank.h"

using namespace std;

Money::Money(int amount, string currency) {
    this->amount = amount;
    this->currency = currency;
}

Money::Money() {

}

Money Money::dollar(int amount) {
    return Money(amount, "USD");
}

Money Money::franc(int amount) {
    return Money(amount, "CHF");
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