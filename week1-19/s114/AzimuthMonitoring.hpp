#include <iostream>
#include <string>
#include <vector>
using namespace std;


class AzimuthMonitoring {
public:
  int getAzimuth(vector<string> instructions) {
    int azimuth = 0;

    for (int i = 0; i < instructions.size(); i++) {
      if (instructions[i] == "RIGHT") {
        azimuth += 90;
      } else if (instructions[i] == "LEFT") {
        azimuth -= 90;
      } else if (instructions[i] == "TURN AROUND") {
        azimuth += 180;
      } else if (instructions[i] == "HALT") {
        return azimuth;
      } else {
        //cout << "L: " << instructions[i].length() << endl;
        if (instructions[i][0] == 'L') {
          if (instructions[i].length() == 6) {
            //cout << instructions[i][5]-'0' << endl;
            azimuth -= instructions[i][5]-'0';
          } else {
            //cout << instructions[i][6]-'0' + (10*(instructions[i][5]-'0')) << endl;
            azimuth -= instructions[i][6]-'0' + (10*(instructions[i][5]-'0'));
          }
        }
        if (instructions[i][0] == 'R') {
          if (instructions[i].length() == 7) {
            //cout << instructions[i][6]-'0' << endl;
            azimuth += instructions[i][6]-'0';
          } else {
            //cout << instructions[i][7]-'0' + (10*(instructions[i][6]-'0')) << endl;
            azimuth += instructions[i][7]-'0' + (10*(instructions[i][6]-'0'));
          }
        }

      }

      if (azimuth < 0) {
        azimuth += 360;
      } else if (azimuth >= 360) {
        azimuth -= 360;
      }

      //cout << azimuth << endl;
    }

    return azimuth;
  }
};
