#include "/home/luiz/Money_C++/Main/lib/Money.h"
#include "/home/luiz/Money_C++/Main/lib/Dolar.h"
#include "/home/luiz/Money_C++/Main/lib/Franc.h"
#include <typeinfo>

using namespace std;

Money::Money(){

}

Dolar* Money::dolar(int amount){
      return new Dolar(amount);
}

Franc* Money::franc(int amount){
      return new Franc(amount);
}

bool Money::Equals(Money* other){
      Money* money = (Money*) other;
      return this->Amount == money->Amount && typeid(money).name() == typeid(other).name();

}

Money* Money::times(int multiplier){

     return new Dolar(Amount *multiplier);
}
