#include "Money.h"
#include "Expression.h"
#include "Bank.h"


class Sum : public Expression{
   public: 
    Sum(Expression* addend, Expression* augend);
    Expression* augend;
    Expression* addend;
    Money* reduce(Bank* bank, string to);
    Expression* plus(Expression* addend);
    Expression* times(int muiltiplier);

};