#include "phone_number.h"
#include <cctype>

using namespace std;

namespace phone_number {
  phone_number::phone_number(string number) {
    for (char c : number) {
      if(isdigit(c))
        clean.push_back(c);
    }

    // remove country code
    if (clean.front() == '1')
      clean.erase(0, 1);

    if (clean.length() != 10)
      throw domain_error("invalid number length");

    if (clean.at(0) == '0' || clean.at(0) == '1')
      throw domain_error("area code can't start with 0 or 1");
  
    if (clean.at(3) == '0' || clean.at(3) == '1')
      throw domain_error("exchange code can't start with 0 or 1");
  }


  phone_number::operator string() const {
    return "(" + clean.substr(0,3) + ") " + clean.substr(3, 3) + "-" + clean.substr(6);
  }
}
