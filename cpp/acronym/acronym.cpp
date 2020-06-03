#include "acronym.h"

using namespace std;

namespace acronym {
  string acronym(string str) {
    string output;
    str = ' ' + str;

    for (char &c: str)
      if (c == ' ' || c == '-')
        output += toupper(*(&c +1));

    return output;
  }
}
