#include "/home/luiz/Money_C++/Main/lib/Sum.h"

Sum::Sum(Money* addend, Money* augend){
    this->addend = addend;
    this->augend = augend;
}

Money* Sum::reduce(Bank* bank, string to){
    int Amount = this->augend->Amount + this->addend->Amount;
    return new Money(Amount,to);
}

Expression* Sum::plus(Expression* addend){
    Money* sumAddend = (Money*) addend;
    return new Sum((Money*)this,sumAddend);
    delete(sumAddend);
}

Expression* Sum::times(int multiplier){
    return new Sum(this->augend->times(multiplier), this->addend->times(multiplier));
}