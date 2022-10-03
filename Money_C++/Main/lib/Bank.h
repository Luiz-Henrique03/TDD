#include "Money.h"

class Bank{
   public:
      Bank();
      Money* reduce(Expression* source, string to);
};