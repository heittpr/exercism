#if !defined(PHONE_NUMBER_H)
#define PHONE_NUMBER_H

#include <stdexcept>
#include <string>
using namespace std;

namespace phone_number {
  class phone_number {
    public: 
      phone_number(string phone);
      string number() { return clean; };
      string area_code() { return clean.substr(0,3); };
      
      operator string() const;
    private:
      string clean;
  };
}

#endif
