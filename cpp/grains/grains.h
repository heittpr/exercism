#if !defined(GRAINS_H)
#define GRAINS_H

#include <cmath>
#include <climits>
using namespace std;

namespace grains {
  unsigned long long int square(int n) { return pow(2ULL, n-1); }
  unsigned long long int total() { return ULLONG_MAX; }
}

#endif
