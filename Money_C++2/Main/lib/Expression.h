#pragma once
#include <string>
using namespace std;
class Money;
class Bank;

class Expression{
   public:
     int Amount;
     Expression();
     virtual Money* reduce(Bank* bank, string to);
     virtual Expression* plus(Expression* addend);
     virtual Expression* times(int multiplier);
};