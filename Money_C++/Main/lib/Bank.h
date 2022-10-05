#include "Money.h"
#include "Expression.h"

class Bank{
   public:
      Bank();
      Money* reduce(Expression* source, string to);
};