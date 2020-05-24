#include "grade_school.h"

#include <algorithm>
using namespace std;

namespace grade_school { 
  void school::add(string student, int grade) {
    if (r.find(grade) == r.end())
      r.insert({grade, vector<string>(1, student)});
    else
      r.at(grade).push_back(student);
  
    sort(r.at(grade).begin(), r.at(grade).end());
  }
} 
