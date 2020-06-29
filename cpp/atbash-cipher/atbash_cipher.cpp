#include "atbash_cipher.h"
using namespace std;

namespace atbash_cipher {
  string encode(string plain) {
    string encoded;

    int i = 0;
    for (char c: plain) {
      if (!isalnum(c)) continue;
      if (i == 5) { encoded += ' '; i = 0; }

      ++i;
      encoded += isalpha(c) ? (char)('a' + 25 - tolower(c) + 'a') : c;
    }

    return encoded;
  }

  string decode(string encoded) {
    string plain;

    int i = 0;
    for (char c: encoded) {
      if (i == 5) { i = 0; continue; }
      
      ++i;
      plain += isalpha(c) ? (char)('a' + 25 - tolower(c) + 'a') : c;
    }

    return plain;
  }
}
