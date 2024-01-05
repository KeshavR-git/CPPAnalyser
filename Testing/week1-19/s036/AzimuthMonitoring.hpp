#include "math.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int XX_MARKER_XX;
 
 
class AzimuthMonitoring
{
  public:
    //AzimuthMonitoring::getAzimuth(
  int getAzimuth(std::vector<std::basic_string<char>> instructions)
  {
    int angle_count = 0;
    int i = 0;
    int size = instructions.size();

    while(i < size)
    {
      if (instructions[i] == "HALT")
      {
        return angle_count;
      }

      if (instructions[i] == "TURN AROUND")
      {
        if (angle_count + 180 >= 360)
        {
          angle_count = (angle_count + 180) - 360;
        }
        else
        {
          angle_count += 180;
        }
      }

      //LEFT
      if (instructions[i][0] == 'L')
      {
        if (instructions[i] == "LEFT")
        {
          if (angle_count - 90 >= 0)
          {
            angle_count -= 90;
          }
          else
          {
            angle_count = 360 + (angle_count - 90);
          }
        }
        else
        {
          string temp;
          temp.append(instructions[i].begin()+5, instructions[i].end());
          int angle = stoi(temp);

          if (angle_count - angle >= 0)
          {
            angle_count -= angle;
          }
          else
          {
            angle_count = 360 + (angle_count - angle);
          }
        }
      }

      //RIGHT
      if (instructions[i][0] == 'R')
      {
        if (instructions[i] == "RIGHT")
        {
          if (angle_count + 90 >= 360)
          {
            angle_count = (angle_count + 90) - 360;
          }
          else
          {
            angle_count += 90;
          }
        }
        else
        {
          string temp;
          temp.append(instructions[i].begin()+6, instructions[i].end());
          int angle = stoi(temp);

          if (angle_count + angle >= 360)
          {
            angle_count = (angle_count + angle) - 360;
          }
          else
          {
            angle_count += angle;
          }
        }
      }
      i++;
    } 
    return angle_count;
  }
};