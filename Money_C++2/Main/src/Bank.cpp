#include "/home/luiz/Money_C++2/Main/lib/Bank.h"
#include "/home/luiz/Money_C++2/Main/lib/Money.h"
#include "/home/luiz/Money_C++2/Main/lib/Sum.h"
#include "/home/luiz/Money_C++2/Main/lib/Expression.h"
#include <map>


Bank::Bank(){

}

Money* Bank::reduce(Expression* source, string to){
    Sum* sum = (Sum*) source;
    return sum->reduce(this,to);
    delete(sum);
    delete(source);

}

int Bank::Rate(string from, string to){
    if(from == to) return 1;
    
    int rate = this->rates.at({from,to});
    return rate;
}

void Bank::addRate(string from, string to, int rate){
    rates.insert({{from,to},rate});
}