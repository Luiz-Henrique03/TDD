#pragma once


#include <string>
#include "Expression.h"


using namespace std;
class Bank;

class Money : public Expression{
   
  protected:
    string Currency;

  public:
     static Money* dolar(int Amount);
     static Money* franc(int Amount);
     bool Equals(Money* other);
     Money();
     Money(int Amount, string Currency);
     Money* times(int multiplier);
     Expression* plus(Expression* addend);
     string currency();
     string toString();
     Money* reduce(Bank* bank, string to);
     int getAmount();
};