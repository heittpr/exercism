#if !defined(ROBOT_NAME_H)
#define ROBOT_NAME_H

#include <string>
#include <vector>
using namespace std;

namespace robot_name {
  class robot {
    public:
      string generate();

      robot() {robot_name = generate(); };
      string name() const { return robot_name; };
      void reset() { robot_name = generate(); };
    private:
      string robot_name;
  };
}

#endif
