#include <string>
#include "Money.h"
#pragma once


class Bank{
  public:
    Bank();  
    virtual Money* reduce(Expression* source, string to);
};