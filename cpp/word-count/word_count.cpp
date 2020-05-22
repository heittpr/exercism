#include "word_count.h"
#include <cctype>
#include <iostream>

using namespace std;

namespace word_count {
  map<string, int> words(string phrase) {
    map<string, int> count;
    string word;

    // ensures phrase always ends with a non alphanumeric character
    phrase.push_back(' ');

    for (char c : phrase) {
      c = tolower(c);

      if (isalnum(c) || c == '\'')
        word.push_back(c);
      else if (!word.empty()) {
        // removes unnecessary apostrophes
        if (word.front() == '\'')
          word.erase(0, 1);
        if (word.back() == '\'')
          word.pop_back();

        if (count.find(word) != count.end())
          count[word]++;
        else
          count.insert({word, 1});

        word.clear();
      }
    }

    return count;
  }
}
