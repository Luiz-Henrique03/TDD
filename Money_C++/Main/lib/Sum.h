#include "Money.h"
#include "Expression.h"

class Sum : public Expression{
   public: 
    Sum(Money* addend, Money* augend);
    Money* augend;
    Money* addend;
    Money* reduce(string to);
};