#include <string>
#include "Money.h"
#pragma once


class Bank{
  public:
    Bank();  
    Money* reduce(Expression* source, string to);
};