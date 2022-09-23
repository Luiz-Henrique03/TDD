#include "/home/luiz/TDD/Money_C++/main/lib/Bank.h"
#include "/home/luiz/TDD/Money_C++/main/lib/Money.h"
#include <map>
#include <iostream>
#include <string>

using namespace std;

Bank::Bank(){

}

Money Bank::Reduce(Expression source, string to) {
    return source.Reduce(this,to);
}

void Bank::addRate(string to, string from, int rate) {
    this->rates.insert(new Pair(from, to),rate);
}


int Bank::rate(string from, string to) {
    if (from == to) return 1;
    int rate = this->rates.at(new Pair(from, to));
    return rate;
}

