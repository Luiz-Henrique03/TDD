#pragma once

#include "Sum.h"
#include <string>
#include "Expression.h"
class Bank;

class Money : public Expression{
   
  protected:
      
    int amount;
    string currency;
      

  public:

      Money(int amount, string currency);

      Money();

      Money dollar(int amount);

      Money franc(int amount);

      virtual Expression* Times(int multiplier) override;

      virtual Expression* plus(Expression addend) override;

      string Currency();
  
      Money Reduce(Bank* bank, string to);
 
};