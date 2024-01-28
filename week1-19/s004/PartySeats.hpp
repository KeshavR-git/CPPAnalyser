#include <string>
#include <vector>
#include <algorithm>
using namespace std;


class PartySeats {
public:
  vector<string> seating(vector<string> attendees) {
    vector<string> boys;
    vector<string> girls;
    vector<string> res;
    vector<string> err;
    bool boyNext = false;
    int middle = (attendees.size() / 2);

    if(attendees.size() == 1) {
      return err;
    }

    for (int i = 0; i < attendees.size(); i++) {
      string name = attendees[i];

      for(int j = 0; j < name.size(); j++) {
        if (name[j] == ' ' && name[j+1] == 'b') {
          name.resize(name.size() - 4);
          boys.push_back(name);
        } else if (name[j] == ' ' && name[j+1] == 'g') {
          name.resize(name.size() - 5);
          girls.push_back(name);
        }
      }

    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    res.push_back("HOST");
    for(int i = 0; i < attendees.size(); i++) {

      if(i == middle && !boyNext) {
        res.push_back("HOSTESS");
        boyNext = true;
      } else if (i == middle && boyNext) {
        cout << "impossible" << endl;
        return err;
      }

      if (boyNext) {
        if(boys.size() == 0) {
          return err;
        }
        res.push_back(boys[0]);
        boys.erase(boys.begin());
      } else {
        if(girls.size() == 0) {
          return err;
        }
        res.push_back(girls[0]);
        girls.erase(girls.begin());
      }
      boyNext = !boyNext;
    }
    return res;

  }
};
