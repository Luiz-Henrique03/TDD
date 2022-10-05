#include "/home/luiz/Money_C++/Main/lib/Sum.h"

Sum::Sum(Money* addend, Money* augend){
    this->addend = addend;
    this->augend = augend;
}

Money* Sum::reduce(string to){
    int Amount = this->augend->Amount + this->addend->Amount;
    return new Money(Amount,to);
}