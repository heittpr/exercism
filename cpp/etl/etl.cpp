#include "etl.h"
#include <map>
#include <vector>
#include <cctype>

using namespace std;

namespace etl {
  map<char, int> transform(map<int, vector<char>> old) {
    map<char, int> output;

    for (auto pair : old) {
      int points = pair.first;

      for (char c: pair.second)
        output.insert({tolower(c), points});
    }

    return output;
  }
}
