#include <string>
#include <sstream>
#include <vector>
using namespace std;


class AzimuthMonitoring
{
  public:

  int getAzimuth(vector<string> instructions)
  {
    int i = 0;
    int degree = 0;

    while(i < instructions.size() )
    {

      if (instructions[i] == "HALT")
      {
        break;
      }
      
      if (instructions[i] == "LEFT")
      {
        degree -= 90;
      }
      else if (instructions[i] == "RIGHT")
      {
        degree += 90;
      }
      else if (instructions[i] == "TURN AROUND")
      {
        degree += 180;
      }
      else //must be "RIGHT X" or "LEFT X"
      {
        int number = 0;
        string deg;

        if (instructions[i][4] == ' ') //LEFT X
        {
          deg = instructions[i].substr(5,instructions[i].length() - 5);
          istringstream buffer (deg);
          buffer >> number;

          degree -= number;
        }
        else //RIGHT X
        {
          deg = instructions[i].substr(6,instructions[i].length() - 6);
          istringstream buffer (deg);
          buffer >> number;

          degree += number;
        }
      }

      if (degree < 0)
      {
        degree += 360;
      }
      else if (degree >= 360)
      {
        degree -= 360;
      }

      i++;
    }

    return degree;
  }

};