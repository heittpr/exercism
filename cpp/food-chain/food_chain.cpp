#include "food_chain.h"
#include <map>
#include <vector>

using namespace std;

namespace food_chain {
  vector<string> animals = {"fly", "spider", "bird", "cat", "dog", "goat", "cow", "horse"};
  map<string, string> phrases = {
    { "spider", "It wriggled and jiggled and tickled inside her.\n" },
    { "bird", "How absurd to swallow a bird!\n" },
    { "cat", "Imagine that, to swallow a cat!\n" },
    { "dog", "What a hog, to swallow a dog!\n" },
    { "goat", "Just opened her throat and swallowed a goat!\n"},
    { "cow", "I don't know how she swallowed a cow!\n"}
  };

  string verse(int n) {
    string output;
    
    output += "I know an old lady who swallowed a " + animals.at(n-1) + ".\n";

    if (n > 7)
      return output + "She's dead, of course!\n";

    output += phrases[animals.at(n-1)];

    for(int i = n-1; i > 0; i--) {
      output += "She swallowed the " + animals.at(i) + " to catch the " + animals.at(i-1);
      
      if (i == 2)
        output += " that wriggled and jiggled and tickled inside her.\n";
      else
        output += ".\n";
    }

    output += "I don't know why she swallowed the fly. Perhaps she'll die.\n";

    return output;
  }

  string verses(int start, int end) {
    string output;

    for(int i = start; i <= end; i++) {
      output += verse(i) + '\n';
    }

    return output;
  }

  string sing() { return(verses(1, 8)); }
}
