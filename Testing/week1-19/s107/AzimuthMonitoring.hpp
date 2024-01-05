#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h> 
using namespace std;
int XX_MARKER_XX;


class AzimuthMonitoring
{
  public:
  int getAzimuth(vector <string> instructions)
  {
    int res = 0;
    int i = 0;
    int len = instructions.size();

    while (i < len && instructions[i] != "HALT")
    {
      if (instructions[i] == "RIGHT")
      {
        res = res + 90;
      }
      else if (instructions[i] == "LEFT")
      {
        res = res - 90;
      }
      else if (instructions[i] == "TURN AROUND")
      {
        res = res + 180;
      }
      else
      {
        if (instructions[i].substr(0,1) == "L")
        {
          string ins1 = instructions[i].substr(5,instructions[i].size());
          res = res - atoi(ins1.c_str());
        }
        else if (instructions[i].substr(0,1) == "R")
        {
          string ins2 = instructions[i].substr(6,instructions[i].size());
          res = res + atoi(ins2.c_str());
        }
      }
      i ++;
    }
  
    while (res >= 360)
    {
      res = res - 360;
    }
    while (res < 0)
    {
      res = res + 360;
    }
  
    return res;
  }

};