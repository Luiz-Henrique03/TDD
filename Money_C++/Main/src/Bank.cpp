#include "/home/luiz/Money_C++/Main/lib/Bank.h"
#include "/home/luiz/Money_C++/Main/lib/Money.h"
#include "/home/luiz/Money_C++/Main/lib/Expression.h"


Bank::Bank(){

}

Money* Bank::reduce(Expression* source, string to){
    return (new Money)->dolar(10);
}