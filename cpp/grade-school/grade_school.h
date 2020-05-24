#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <string>
#include <map>
#include <vector>

using namespace std;

namespace grade_school {
  class school {
    public:
      void add(string student, int grade);
      map<int, vector<string>> roster() const { return r; };
      vector<string> grade(int g) const { return r.find(g) != r.end() ? r.at(g) : vector<string>(); };
    private:
      map<int, vector<string>> r;
  };
}

#endif
