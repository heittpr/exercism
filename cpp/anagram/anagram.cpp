#include "anagram.h"
#include <algorithm>
#include <iostream>

using namespace std;

namespace anagram {
    string word;

    string anagram::lower(string str) {
      transform(
        str.begin(),
        str.end(),
        str.begin(),
        ::tolower
      );

      return str;
    }

    anagram::anagram(string str) {
      word = lower(str);
    }

    vector<string> anagram::matches(vector<string> candidates) {
      vector<string> anagrams;

      for ( string candidate : candidates ) {
        string l = lower(candidate);

        if (l != word && l.length() == word.length() && is_permutation(word.begin(), word.end(), l.begin()))
          anagrams.push_back(candidate);
      }

      return anagrams;
    }
}
