
class Expression{

public:
    Money Reduce(Bank bank, string to);
    virtual Expression Times(int Multiplier);
    virtual Expression plus(Expression addend);
    
};