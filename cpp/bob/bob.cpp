#include "bob.h"

using namespace std;

namespace bob {
  string hey(const string str) {
    bool yelling, empty = true;
    bool hasalpha = false;
    char last;

    for (char c : str) {
      if (isalpha(c))
        hasalpha = true;

      if (c != toupper(c))
        yelling = false;

      if (isgraph(c)) {
        empty = false;
        last = c;
      }
    }

    yelling = yelling && hasalpha;

    bool question = last == '?';

    if (empty)
      return "Fine. Be that way!";

    if (question) {
      if (yelling)
        return "Calm down, I know what I'm doing!";

      return "Sure.";
    }
    
    if (yelling)
      return "Whoa, chill out!";
    
    return "Whatever.";
  }
}
