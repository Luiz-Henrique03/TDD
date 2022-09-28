#include "/home/luiz/Money_C++/Main/lib/Money.h"
#include "/home/luiz/Money_C++/Main/lib/Dolar.h"
#include "/home/luiz/Money_C++/Main/lib/Franc.h"

using namespace std;

Money::Money(){

}

Money::Money(int Amount, string Currency){
    this->Amount = Amount;
    this->Currency = Currency;
}

Dolar* Money::dolar(int amount){
    return new Dolar(amount,"USD");
}

Franc* Money::franc(int amount){
    return new Franc(amount,"CHF");
}

bool Money::Equals(Money* other){
    Money* money = (Money*) other;
    return this->Amount == money->Amount && this->Currency == money->Currency;
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
