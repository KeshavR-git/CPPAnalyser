#include <iostream>
#include <vector>
#include <string>
int XX_MARKER_XX;

class AzimuthMonitoring
{
  public:
  int getAzimuth(std::vector<std::string> instructions)
  {
    int currentAzimuth = 0;

    for(int i = 0; i < instructions.size(); i++){
        std::string instr = instructions[i];

        if(instr == "LEFT"){
            currentAzimuth += 270;
        } else if(instr == "RIGHT"){
            currentAzimuth += 90;
        } else if(instr == "TURN AROUND"){
            currentAzimuth += 180;
        } else if(instr == "HALT"){
            break;
        } else {
            std::string dir = instr.substr(0,instr.find(" "));

            if(dir == "LEFT"){
                currentAzimuth += 360 - stoi(instr.substr(instr.find(" "), instr.size()));
            } else {
                currentAzimuth += stoi(instr.substr(instr.find(" "), instr.size()));
            }
        }
    }

    currentAzimuth = currentAzimuth % 360;

    return currentAzimuth;
  }
};