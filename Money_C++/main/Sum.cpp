#include "Sum.h"
#include "Expression.h"

 Sum::Sum(Expression augend, Expression addend){
    this->augend = augend;
    this->addend = addend;
}

Expression* Sum::plus(Expression addend){
    return new Sum(this->augend,addend);
}