#if !defined(MEETUP_H)
#define MEETUP_H

#include <boost/date_time/gregorian/gregorian.hpp>
using namespace boost::gregorian;
typedef nth_day_of_the_week_in_month ndow;

// oh shit oh fuck

namespace meetup {
  class scheduler {
    public:
      scheduler(greg_month m, greg_year y) : month(m), year(y) {};
      
      date monteenth()      const { return nteenth( Monday     ); }
      date tuesteenth()     const { return nteenth( Tuesday    ); }
      date wednesteenth()   const { return nteenth( Wednesday  ); }
      date thursteenth()    const { return nteenth( Thursday   ); }
      date friteenth()      const { return nteenth( Friday     ); }
      date saturteenth()    const { return nteenth( Saturday   ); }
      date sunteenth()      const { return nteenth( Sunday     ); }

      date first_monday()     const { return nth_wday(ndow::first, Monday     ); }
      date first_tuesday()    const { return nth_wday(ndow::first, Tuesday    ); }
      date first_wednesday()  const { return nth_wday(ndow::first, Wednesday  ); }
      date first_thursday()   const { return nth_wday(ndow::first, Thursday   ); }
      date first_friday()     const { return nth_wday(ndow::first, Friday     ); }
      date first_saturday()   const { return nth_wday(ndow::first, Saturday   ); }
      date first_sunday()     const { return nth_wday(ndow::first, Sunday     ); }

      date second_monday()     const { return nth_wday(ndow::second, Monday     ); }
      date second_tuesday()    const { return nth_wday(ndow::second, Tuesday    ); }
      date second_wednesday()  const { return nth_wday(ndow::second, Wednesday  ); }
      date second_thursday()   const { return nth_wday(ndow::second, Thursday   ); }
      date second_friday()     const { return nth_wday(ndow::second, Friday     ); }
      date second_saturday()   const { return nth_wday(ndow::second, Saturday   ); }
      date second_sunday()     const { return nth_wday(ndow::second, Sunday     ); }

      date third_monday()     const { return nth_wday(ndow::third, Monday     ); }
      date third_tuesday()    const { return nth_wday(ndow::third, Tuesday    ); }
      date third_wednesday()  const { return nth_wday(ndow::third, Wednesday  ); }
      date third_thursday()   const { return nth_wday(ndow::third, Thursday   ); }
      date third_friday()     const { return nth_wday(ndow::third, Friday     ); }
      date third_saturday()   const { return nth_wday(ndow::third, Saturday   ); }
      date third_sunday()     const { return nth_wday(ndow::third, Sunday     ); }

      date fourth_monday()     const { return nth_wday(ndow::fourth, Monday     ); }
      date fourth_tuesday()    const { return nth_wday(ndow::fourth, Tuesday    ); }
      date fourth_wednesday()  const { return nth_wday(ndow::fourth, Wednesday  ); }
      date fourth_thursday()   const { return nth_wday(ndow::fourth, Thursday   ); }
      date fourth_friday()     const { return nth_wday(ndow::fourth, Friday     ); }
      date fourth_saturday()   const { return nth_wday(ndow::fourth, Saturday   ); }
      date fourth_sunday()     const { return nth_wday(ndow::fourth, Sunday     ); }

      date last_monday()      const { return last_wday( Monday    ); }
      date last_tuesday()     const { return last_wday( Tuesday   ); }
      date last_wednesday()   const { return last_wday( Wednesday ); }
      date last_thursday()    const { return last_wday( Thursday  ); }
      date last_friday()      const { return last_wday( Friday    ); }
      date last_saturday()    const { return last_wday( Saturday  ); }
      date last_sunday()      const { return last_wday( Sunday    ); }
    private:
      greg_month month;
      greg_year year;
      
      date nteenth    (greg_weekday day)                          const;
      date nth_wday   (ndow::week_num num, greg_weekday weekday)  const;
      date last_wday  (greg_weekday day)                          const;
  };
}

#endif
