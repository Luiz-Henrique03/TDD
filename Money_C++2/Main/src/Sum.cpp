#include "/home/luiz/Money_C++2/Main/lib/Sum.h"
#include "/home/luiz/Money_C++2/Main/lib/Expression.h"

Sum::Sum(Expression* addend, Expression* augend){
    this->addend = addend;
    this->augend = augend;
}

Money* Sum::reduce(Bank* bank, string to){
    int Amount = this->augend->getAmount() + this->addend->getAmount();
    return new Money(Amount,to);
    delete(bank);
}

Expression* Sum::plus(Expression* addend){
    Money* sumAddend = (Money*) addend;
    return new Sum((Money*)this,sumAddend);
    delete(addend);
    delete(sumAddend);
}

Expression* Sum::times(int multiplier){
    return new Sum(this->augend->times(multiplier), this->addend->times(multiplier));
}