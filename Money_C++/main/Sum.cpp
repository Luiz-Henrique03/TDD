#include "Sum.h"
#include "Expression.h"

Sum(Expression augend, Expression addend) {
    this->augend = augend;
    this->addend = addend;
}

virtual Expression plus(Expression addend) override {
    return Sum(addend);
}