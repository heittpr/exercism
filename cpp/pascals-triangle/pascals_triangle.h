#if !defined(PASCALS_TRIANGLE_H)
#define PASCALS_TRIANGLE_H

#include <vector>
using namespace std;

namespace pascals_triangle {
  int factorial(int n);
  vector<vector<int>> generate_rows(int m);
}

#endif
