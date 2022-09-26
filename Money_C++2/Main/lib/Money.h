#pragma once

class Dolar;
class Franc;

class Money{

  public:
     int Amount;
     static Dolar* dolar(int Amount);
     static Franc* franc(int Amount);
     bool Equals(Money* other);
     Money();
     Money* times(int multiplier);

};