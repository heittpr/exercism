#include "hexadecimal.h"
#include <algorithm>

namespace hexadecimal {
  int convert(string str) {
    reverse(str.begin(), str.end());
    int output = 0, base = 1;

    for (char c: str) {
      if (!isxdigit(c)) return 0;

      if (c <= '9')
        output += base * (c - '0');
      else
        output += base * (tolower(c) - 'a' + 10);

      base *= 16;
    }

    return output;
  }
}
