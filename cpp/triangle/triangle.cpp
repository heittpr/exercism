#include "triangle.h"
#include <algorithm>
#include <stdexcept>
#include <vector>

using namespace std;

namespace triangle {
  flavor kind(double a, double b, double c) {
    // checks for invalid triangles
    double smallest = min(min(a,b), c);
    double largest = max(max(a,b), c);

    if (a + b + c - 2*largest <= 0 || smallest < 0)
      throw domain_error("invalid triangle");

    if (a == b) {
      if (a == c)
        return flavor::equilateral;

      return flavor::isosceles;
    }

    if (b == c || a == c)
      return flavor::isosceles;

    return flavor::scalene;
  }
}
