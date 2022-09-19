#pragma once

#include "Expression.h"

class Sum : public Expression{

public:

    Expression augend;
    Expression addend;
     
    Sum(Expression augend, Expression addend);
    
    virtual Expression* plus(Expression addend) override;
    
   

  
};