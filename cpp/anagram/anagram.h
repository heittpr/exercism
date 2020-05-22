#if !defined(ANAGRAM_H)
#define ANAGRAM_H

#include <string>
#include <vector>
using namespace std;

namespace anagram {
  class anagram {
    public:
      anagram(string str);
      vector<string> matches(vector<string> candidates);
    private:
      string lower(string str);
  };
}

#endif
