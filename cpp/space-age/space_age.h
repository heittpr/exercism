#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {
  class space_age {
    public:
      space_age(long s) { sec = s; };

      long  seconds()     const { return sec; };
      float on_earth()    const { return sec / sec_per_year; };
      float on_mercury()  const { return sec / (0.2408467 * sec_per_year); };
      float on_venus()    const { return sec / (0.6151972 * sec_per_year); };
      float on_mars()     const { return sec / (1.8808158 * sec_per_year); };
      float on_jupiter()  const { return sec / (11.862615 * sec_per_year); };
      float on_saturn()   const { return sec / (29.447498 * sec_per_year); };
      float on_uranus()   const { return sec / (84.016846 * sec_per_year); };
      float on_neptune()  const { return sec / (164.79132 * sec_per_year); };
    private:
      long sec;
      double sec_per_year = 31557600;
  };
}

#endif
