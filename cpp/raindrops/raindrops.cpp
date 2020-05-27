#include "raindrops.h"
using namespace std;

namespace raindrops {
  string convert(int n) {
    string output;
    
    if (n % 3 == 0)
      output += "Pling";
    if (n % 5 == 0)
      output += "Plang";
    if (n % 7 == 0)
      output += "Plong";

    return output.empty() ? to_string(n) : output;  
  }
}
