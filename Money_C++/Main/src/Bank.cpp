#include "/home/luiz/Money_C++/Main/lib/Bank.h"
#include "/home/luiz/Money_C++/Main/lib/Money.h"
#include "/home/luiz/Money_C++/Main/lib/Sum.h"


Bank::Bank(){

}

Money* Bank::reduce(Expression* source, string to){
    Sum* sum = (Sum*) source;
    return sum->reduce(to);
}