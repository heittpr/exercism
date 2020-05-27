#include "pascals_triangle.h"
using namespace std;

#include <iostream>

namespace pascals_triangle {
  int memo[999]; // memoization
  
  int fact(int n) {
    if (n <= 1)
      return 1;

    return memo[n] = memo[n] != 0 ? memo[n] : n * fact(n-1);
  }

  vector<vector<int>> generate_rows(int m) {
    vector<vector<int>> output;
    
    for (int n = 0; n < m; n++) {
      vector<int> row;
      for (int k = 0; k <= n; k++)
        row.push_back(fact(n)/(fact(k)*fact(n-k)));

      output.push_back(row);
    }

    return output;
  }
}
