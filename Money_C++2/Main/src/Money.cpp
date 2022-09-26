#include "/home/luiz/Money_C++/Main/lib/Money.h"
#include <typeinfo>
#include <iostream>

using namespace std;

bool Money::Equals(Money* other){
      Money* money = (Money*) other;
      return this->Amount == money->Amount && typeid(money).name() == typeid(other).name();

}