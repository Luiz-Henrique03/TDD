#include <string>

using namespace std;

class Pair{
   protected:
     string from;
     string to;
   public:
     Pair(string from, string to);
     bool Equals(string* other);
};