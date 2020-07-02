#include "matching_brackets.h"
using namespace std;

#include <stack>

namespace matching_brackets {
  bool check(string str) {
    stack <char> stack;

    for (char c: str) {
      if (c == '(') { stack.push(')'); continue; }
      if (c == '[') { stack.push(']'); continue; }
      if (c == '{') { stack.push('}'); continue; }
      if (c == ')' || c == ']' || c == '}') {
        if (stack.empty() || stack.top() != c)
          return false;
        else
          stack.pop();
      }
    }

    return stack.empty();
  }
}
