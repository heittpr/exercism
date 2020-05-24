#include "robot_name.h"

#include <cstdlib>
#include <algorithm>

namespace robot_name {
  auto randchar = []() { return (char)(rand() % 26 + 65); };
  auto randdigit = []() { return (char)(rand() % 10 + 48); };

  vector<string> used;

  string robot::generate() {
    string s;

    do {
      s = string() + randchar() + randchar() + randdigit() + randdigit() + randdigit();
    } while (find(used.begin(), used.end(), s) != used.end());

    used.push_back(s);
    return s;
  }
}
