#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <string>
#include <map>

using namespace std;

namespace nucleotide_count {
  class counter {
    public:
      counter(string str);
      int count(char nucleotide) const;
      map<char, int> nucleotide_counts() const;
    private:
      bool isvalid(char c) const;
  };
}

#endif
