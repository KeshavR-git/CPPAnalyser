#include <iostream>
#include <sstream>
#include <array>
#include <vector> 
using namespace std;
int XX_MARKER_XX;


class AzimuthMonitoring
{
  public:
  int getAzimuth(vector<string> instructions)
  {
    int currentAngle = 0;

    for(int i = 0; i < instructions.size(); i++){
      string currentInstr = instructions.at(i);
      if(currentInstr == "LEFT"){
        currentAngle -= 90;
      } else if (currentInstr == "RIGHT"){
        currentAngle += 90;
      } else if (currentInstr == "TURN AROUND"){
        currentAngle += 180;
      } else if (currentInstr == "HALT"){
        return ((currentAngle % 360) + 360) % 360;
      } else {
        istringstream iss(currentInstr);
        string direction, angle;

        getline(iss, direction, ' ');
        getline(iss, angle, ' ');
        
        if (direction == "LEFT"){
          currentAngle -= stoi(angle);
        } else if (direction == "RIGHT") {
          currentAngle += stoi(angle);
        }
      }
    }

    return ((currentAngle % 360) + 360) % 360;

  }
};