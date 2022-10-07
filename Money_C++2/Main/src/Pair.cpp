#include "/home/luiz/Money_C++2/Main/lib/Pair.h"

bool Pair::Equals(string* other){
    Pair* pair = (Pair*) other;
    return from == pair->from && to == pair->to;
}