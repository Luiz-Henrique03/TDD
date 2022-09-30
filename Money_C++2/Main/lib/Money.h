#include <string>

#pragma once
class Expression;

using namespace std;

class Money{
   
  protected:
    string Currency;

  public:
     int Amount;
     static Money* dolar(int Amount);
     static Money* franc(int Amount);
     bool Equals(Money* other);
     Money();
     Money(int Amount, string Currency);
     Money* times(int multiplier);
     virtual Expression* plus(Money* addend);
     virtual string currency();
     string toString();

};