#include <string>
#include <iostream>
#include <vector>
using namespace std;
int XX_MARKER_XX;

class AzimuthMonitoring {

  //O(1)
  int AddDegree(int origin, int add) {
    int res = (origin + add) % 360;

    if (res < 0) {
      res = 360 + res;
    }
    return res;
  }
public:
  int getAzimuth(vector<string> instructions){

    int res =0;
    for (int i = 0; i < instructions.size(); i++) {
      string s = instructions[i];

      if (s == "LEFT") {

        res = AddDegree(res, -90);

      } else if (s == "RIGHT") {

        res = AddDegree(res, 90);

      } else if (s == "TURN AROUND") {

        res = AddDegree(res, 180);

      } else if (s[0] == 'L') {

        string j = "";
        for (int k = 5; k < s.size(); k++) {

          j += s[k];
        }
        int deg = stoi(j);

        res = AddDegree(res, -deg);

      } else if (s[0] == 'R') {

        string j = "";
        for (int k = 6; k < s.size(); k++) {
          j += s[k];
        }
        int deg = stoi(j);
        res = AddDegree(res, deg);
        
      } else {
        break;
      }
    }

    return res;
  }
};
