#include <string>

#pragma once

class Dolar;
class Franc;

using namespace std;

class Money{
   
  protected:
      string Currency;
  public:
     int Amount;
     static Dolar* dolar(int Amount);
     static Franc* franc(int Amount);
     bool Equals(Money* other);
     Money();
     Money(int Amount, string Currency);
     Money* times(int multiplier);
     virtual string currency();
     string toString();

};