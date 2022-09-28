#include "/home/luiz/Money_C++/Main/lib/Dolar.h"
#include "/home/luiz/Money_C++/Main/lib/Money.h"

using namespace std;

Dolar::Dolar(int Amount,string Currency){
    this->Amount = Amount;
    this->Currency = "USD";
}

string Dolar::currency(){
    return Currency;
}

Money* Dolar::times(int multiplier){
    Money* money = new Money();
    return new Dolar(this->Amount * multiplier,this->Currency);
}

