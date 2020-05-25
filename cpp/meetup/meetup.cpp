#include "meetup.h"
#include <iostream>

using namespace std;
using namespace boost::gregorian;
typedef nth_day_of_the_week_in_month ndow;

namespace meetup {
  date scheduler::nteenth(greg_weekday day) const {
    ndow n(ndow::second, day, month);
    date d = n.get_date(year);
    
    if ( d.day() < 13 || d.day() > 19) {
      n = {ndow::third, day, month};
      d = n.get_date(year);
    }

    return d;
  }

  date scheduler::nth_wday(ndow::week_num num, greg_weekday day) const {
    ndow n(num, day, month);
    return n.get_date(year);
  }

  date scheduler::last_wday(greg_weekday day) const {
    last_day_of_the_week_in_month lwdm(day,month);
    return lwdm.get_date(year);
  }
}
