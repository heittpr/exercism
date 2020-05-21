#include "isogram.h"

#include <unordered_set>
#include <cctype>

namespace isogram {
  bool is_isogram(const std::string &input) {
    std::unordered_set<char> seen;
    
    for(char c : input) {
      if(std::isalpha(c) && seen.count(std::tolower(c)))
        return false;
      else
        seen.insert(std::tolower(c));
    }

    return true;
  }
}
