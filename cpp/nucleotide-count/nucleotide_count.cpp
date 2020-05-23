#include "nucleotide_count.h"
#include <stdexcept>

using namespace std;

namespace nucleotide_count {
  string dna;
  string valid = "ACGT";

  bool counter::isvalid(char c) const {
    return valid.find(c) != string::npos;
  }

  counter::counter(string str) {
    string valid = "ACGT";

    for (char c: str) {
      if (!isvalid(c))
        throw invalid_argument("invalid symbol " + c);
    }
    dna = str;
  }

  map<char, int> counter::nucleotide_counts() const {
    map<char, int> total = {{'A', 0}, {'T', 0}, {'C', 0}, {'G', 0}};

    for (char c : dna)
      total[c]++;

    return total;
  }

  int counter::count(char nucleotide) const {
    if(!isvalid(nucleotide))
      throw invalid_argument("invalid symbol " + nucleotide);

    int total = 0;

    for (char c : dna) {
      if (c == nucleotide)
        total++;
    }

    return total;
  }
}
