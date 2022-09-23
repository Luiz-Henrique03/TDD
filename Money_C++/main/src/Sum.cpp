#include "/home/luiz/TDD/Money_C++/main/lib/Sum.h"
#include "/home/luiz/TDD/Money_C++/main/lib/Expression.h"

 Sum::Sum(Expression augend, Expression addend){
    this->augend = augend;
    this->addend = addend;
}

Expression* Sum::plus(Expression addend){
    return new Sum(this->augend, addend);
}