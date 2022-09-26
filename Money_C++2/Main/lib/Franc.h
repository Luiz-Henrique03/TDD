#include "Money.h"

class Franc : public Money{
      
  public:
     Franc(int Amount);
     Franc* times(int multiplier);
   
};