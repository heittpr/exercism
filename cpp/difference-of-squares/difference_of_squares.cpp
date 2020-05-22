#include "difference_of_squares.h"
#include <cmath>

using namespace std;

namespace difference_of_squares {
  int square_of_sum(int n) {
    return pow((float)n/2 * (n+1), 2);
  }

  int sum_of_squares(int n) {
    return float(n*(n+1)*(2*n+1))/6;
  }

  int difference(int n) {
    return square_of_sum(n) - sum_of_squares(n);
  }
}
