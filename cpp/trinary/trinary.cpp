#include "trinary.h"
#include <cmath>

using namespace std;

namespace trinary {
  int to_decimal(string number) {
    int output = 0;
    int i = number.length() - 1;

    for (char c : number) {
      if (c != '0' && c != '1' && c != '2')
        return 0;

      output += pow(3, i) * (c - '0');
      i--;
    }

    return output;
  }
}
