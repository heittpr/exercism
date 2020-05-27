#include "binary.h"
#include <cmath>

using namespace std;

namespace binary {
  int convert(string number) {
    int output = 0, i = number.length()-1;

    for (char c : number) {
      if (c == '1' || c == '0')
        output += pow(2, i) * (c == '1');
      else
        return 0;

      i--;
    }

    return output;
  }
}
