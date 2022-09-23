#include "/home/luiz/Money_C++/Main/lib/Dolar.h"
#include "/home/luiz/Money_C++/Main/lib/Money.h"

using namespace std;

bool Dolar::Equals(Money* other){
        return this->Amount == other->Amount;
}