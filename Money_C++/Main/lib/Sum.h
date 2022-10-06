#include "Money.h"
#include "Expression.h"
#include "Bank.h"


class Sum : public Expression{
   public: 
    Sum(Money* addend, Money* augend);
    Money* augend;
    Money* addend;
    Money* reduce(Bank* bank, string to);
    Expression* plus(Expression* addend);
    Expression* times(int muiltiplier);

};