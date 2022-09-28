#include "Money.h"
#include <string>
using namespace std;

class Franc : public Money{
   private:
     string Currency;    
  public:
     Franc(int Amount, string Currency);
     string currency() override;
     Money* times(int amount);
     typedef Franc super;
};