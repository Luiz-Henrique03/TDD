#include "/home/luiz/Money_C++/Main/lib/Money.h"
#include "/home/luiz/Money_C++/Main/lib/Expression.h"
#include "/home/luiz/Money_C++/Main/lib/Sum.h"


using namespace std;

Money::Money(){

}

Money::Money(int Amount, string Currency){
    this->Amount = Amount;
    this->Currency = Currency;
}

Money* Money::dolar(int amount){
    return new Money(amount,"USD");
}

Money* Money::franc(int amount){
    return new Money(amount,"CHF");
}

bool Money::Equals(Money* other){
    Money* money = (Money*) other;
    return this->Amount == money->Amount && this->Currency == money->Currency;
    delete(money);
}

Money* Money::times(int multiplier){
    return new Money(Amount *multiplier,this->Currency);
}

string Money::currency(){
    return this->Currency;
}

string Money::toString(){
    return this->Amount+ " "+this->Currency;
}

Expression* Money::plus(Money* addend){
    return new Sum(this,addend);
}

Money* Money::reduce(Bank* bank, string to){
    int rate = bank->Rate(Currency,to);
    return new Money(Amount / rate, to);
}
