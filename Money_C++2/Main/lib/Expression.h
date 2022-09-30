#pragma once
#include "Money.h"


class Expression : public Money{
  public:
    Money reduce(string to);

};