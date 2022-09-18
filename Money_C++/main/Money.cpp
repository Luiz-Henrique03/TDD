#include"Expression.hpp"
#include "Sum.h"
#include "Money.h"
#include <string>

Money(int amount, string currency) {
    this->amount = amount;
    this->currency = currency;
}

Money() {

}

Money dollar(int amount) {
    return Money(amount, "USD");
}

Money franc(int amount) {
    return Money(amount, "CHF");
}

virtual Expression Times(int multiplier) override {
    return Money(amount * multiplier, currency);
}

virtual Expression plus(Expression addend) override {
    return Sum(this, addend);
}

Money plus(Money addend) {
    return Sum(this, addend);
}

string Currency() {
    return this->currency;
}

virtual Money Reduce(Bank* bank, string to) {
    int rate = bank->rate(currency, to);
    return Money(amount / rate, to);
}