#include "roman_numerals.h"
#include <cmath>
#include <iostream>

using namespace std;

namespace roman_numerals {
  string digit(int d, char one, char five, char ten) {
    if ( d < 4  )   return string(d, one);
    if ( d == 4 )   return string(1, one) + five;
    if ( d < 9  )   return five + string(d-5, one);
    return string(1, one) + ten;
  }

  string convert(int n) {
    string output;

    for (int i = floor(log10(n)); i >= 0; i--) {
      int d = (int)(n/pow(10,i)) % 10;
      
      if (d != 0) {
        if (i == 3)
          output += string(d, 'M');
        else if (i == 2)
          output += digit(d, 'C', 'D', 'M');
        else if (i == 1)
          output += digit(d, 'X', 'L', 'C');
        else
          output += digit(d, 'I', 'V', 'X');
      }
    }

    return output;
  }
}
