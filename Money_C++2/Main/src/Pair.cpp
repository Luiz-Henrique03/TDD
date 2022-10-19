#include "Pair.h"
#include "Expression.h"

bool Pair::Equals(string* other){
    Pair* pair = (Pair*) other;
    return from == pair->from && to == pair->to;
    delete(other);
    delete(pair);
}