#include "Money.h"
#include <string>
using namespace std;

class Dolar : public Money{
  
  
  public:
     Dolar(int Amount,string Currency);
     string currency() override;  
     Money* times(int amount);
};