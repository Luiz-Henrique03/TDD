#include "Bank.h"
#include "Money.h"
#include <map>
#include <iostream>

Bank() {

}

Money Reduce(Expression source, string to) {
    return source.Reduce(this, to);
}

void addRate(string to, string from, int rate) {
    this->rates.insert(pair<Pair, int>(new Pair(from, to), rate));
}


int rate(string from, string to) {
    if (from == to) return 1;
    int rate = this->rates.at(new Pair(from, to));
    return rate;
}


