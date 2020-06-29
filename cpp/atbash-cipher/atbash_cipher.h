#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H

#include <string>
using namespace std;

namespace atbash_cipher {
  string encode(string plain);
  string decode(string encoded);
}

#endif
