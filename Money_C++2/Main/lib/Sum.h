#include "Expression.h"
#include "Money.h"


class Sum : public Expression{

  public:
    Sum(Money* augend, Money* addend);
    Money* augend;
    Money* addend;
    Money* reduce(string to);
};