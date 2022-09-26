#include "Money.h"

class Dolar : public Money{
  
  private:
      int amount;

  public:
     Dolar(int Amount);
     Dolar* times(int multiplier);
   
};