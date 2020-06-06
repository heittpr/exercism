#include "rna_transcription.h"
#include <map>
using namespace std;

namespace rna_transcription {
  map<char, char> complements = {
    {'G', 'C'},
    {'C', 'G'},
    {'T', 'A'},
    {'A', 'U'},
  };

  string to_rna(string dna) {
    string output;

    for (char c : dna)
      output += complements[c];

    return output;
  }

  char to_rna(char dna) { return complements[dna]; }
}
