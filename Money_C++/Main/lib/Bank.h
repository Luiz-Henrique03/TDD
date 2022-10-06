#include "Money.h"
#include "Expression.h"
#include <map>

#pragma once

class Bank{
   protected:
     map<pair<string, string>,int> rates;
     
   public:
      Bank();
      Money* reduce(Expression* source, string to);
      int Rate(string from, string to);
      void addRate(string from, string to, int rate);
};