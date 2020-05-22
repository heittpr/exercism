#include "hamming.h"
#include <stdexcept>

using namespace std;

namespace hamming {
  int compute(string a, string b) {
    if (a.length() != b.length())
      throw domain_error("both strings must have the same length");

    int diff = 0;

    for (long unsigned int i = 0; i <= a.length(); i++)
      diff += a[i] != b[i];

    return diff;
  }
}
