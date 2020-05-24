#include "sum_of_multiples.h"

#include <cmath>
#include <iostream>
using namespace std;

namespace sum_of_multiples {
  // not exactly proud of this but oh well

  int to(vector<int>numbers, int max) {
    int sum = 0;

    for (int i = 0; i < max; i++) {
      for (int n : numbers) {
        if (i % n == 0) {
          sum += i;
          break;
        }
      }
    }

    return sum;
  }
}
