#include "/home/luiz/Money_C++/Main/lib/Franc.h"
#include "/home/luiz/Money_C++/Main/lib/Money.h"

using namespace std;

Franc::Franc(int Amount,string Currency){
    this->Amount = Amount;
    this->Currency = "CHF";
}

string Franc::currency(){
    return Currency;
}

Money* Franc::times(int multiplier){
    Money* money = new Money();
    return new Money(this->Amount * multiplier,this->Currency);
}




