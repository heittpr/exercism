#if !defined(ALLERGIES_H)
#define ALLERGIES_H

#include <string>
#include <map>
#include <unordered_set>
#include <iostream>
using namespace std;

namespace allergies {
  map <string, int> table = {
    {"eggs", 1},
	  {"peanuts" , 2},
		{"shellfish",  4},
		{"strawberries",  8},
		{"tomatoes",  16},
		{"chocolate",  32},
		{"pollen",  64},
		{"cats" , 128}
	};

  class allergy_test {
    public:
      allergy_test(int score) { this->score = score; }

      bool is_allergic_to(string allergy) {
        return table.count(allergy) ? table.at(allergy) & score : false;
      }
      
      unordered_set<string> get_allergies() {
        unordered_set<string> allergies;

        for (auto row : table)
          if (this->is_allergic_to(row.first))
            allergies.insert(row.first);

        return allergies;
      }
    private:
      int score;
  };
}

#endif
