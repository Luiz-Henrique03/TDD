#pragma once

#include "Pair.h"
#include <map>
#include <iostream>
#include "Money.h"

class Bank{
 
  protected:

    const map<Pair,int> rates;

  public:

      Bank();
      Money Reduce(Expression source, string to);
      void addRate(string to, string from, int rate);      
      int rate(string from, string to);
      

};