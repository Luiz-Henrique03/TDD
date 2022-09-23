#pragma once

#include "Expression.h"

class Sum : public Expression{

    public:

        Sum(Expression augend, Expression addend);  

        Expression augend;
        Expression addend;
        
        virtual Expression* plus(Expression addend) override;
    
};