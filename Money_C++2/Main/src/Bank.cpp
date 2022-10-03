#include "/home/luiz/Money_C++/Main/lib/Expression.h"
#include "/home/luiz/Money_C++/Main/lib/Money.h"
#include "/home/luiz/Money_C++/Main/lib/Bank.h"
#include "/home/luiz/Money_C++/Main/lib/Sum.h"
#include <iostream>

template<typename Base, typename T>
inline bool instanceof(const T *ptr) {
   return dynamic_cast<const Base*>(ptr) != nullptr;
}


Bank::Bank(){

}

Money* Bank::reduce(Expression* source, string to){

   if(instanceof<Money>(source)){
      return (Money*)source->reduce(to);
   }

   Sum* sum = (Sum*) source;
   return sum->reduce(to);
}
