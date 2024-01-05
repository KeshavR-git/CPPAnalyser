using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
int XX_MARKER_XX;

 
class AzimuthMonitoring
{
  public:
  int getAzimuth(vector<string> instructions)
  {
    // your code for the problem
    int res = 0;
    string temp = "";
    int temper = 0;
    for (int i = 0; i < instructions.size(); i++) {
      if (instructions[i] == "LEFT") {
        res -= 90;
      } else if (instructions[i] == "RIGHT") {
        res += 90;
      } else if (instructions[i] == "TURN AROUND") {
        res += 180;
      } else if (instructions[i] == "HALT") {
        i = instructions.size();
      } else if (instructions[i].substr(0,5) == "LEFT ") {
        temp = instructions[i].substr(5,instructions[i].size());
        stringstream value(temp);
        value >> temper;
        res -= temper;
      } else if (instructions[i].substr(0,6) == "RIGHT ") {
        temp = instructions[i].substr(6,instructions[i].size());
        stringstream value(temp);
        value >> temper;
        res += temper;
      }
    }
    while (res >= 360) {
      res -= 360;
    }
    while (res < 0) {
      res += 360;
    }
    return res;  // return your result
  }
};