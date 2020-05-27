#include "prime_factors.h"
using namespace std;

namespace prime_factors {
  vector<int> of(int n) {
    vector<int> output;

    int p = 2;
    while (n != 1) {
      while (n%p == 0) {
        output.push_back(p);
        n = n/p;
      }
      if (p == 2) p += 1;
      else p += 2;
    }

    return output;
  }
}
