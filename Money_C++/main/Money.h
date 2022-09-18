#include"Expression.h"
#include "Sum.h"
#include <string>


class Money : public Expression{
   
 protected:
    
    int amount;
    string currency;
     

 public:

    Money(int amount, string currency);

    Money();

    Money dollar(int amount);

    Money franc(int amount);

    virtual Expression Times(int multiplier) override;

    virtual Expression plus(Expression addend) override;

    Money plus(Money addend);

    string Currency();
 
    virtual Money Reduce(Bank bank, string to);
 
};