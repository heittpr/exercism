#include "gigasecond.h"

using namespace boost::posix_time;

namespace gigasecond {
  ptime advance(ptime time) {
    return ptime(time + seconds(1000000000));
  }
}
