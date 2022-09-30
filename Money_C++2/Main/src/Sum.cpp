#include "/home/luiz/Money_C++/Main/lib/Sum.h"

Sum::Sum(Money* augend, Money* addend){
    this->augend = augend;
    this->addend = addend;
}

Money* Sum::reduce(string to){
    int amount = augend->Amount + addend->Amount;
    return new Money(amount,to);
}