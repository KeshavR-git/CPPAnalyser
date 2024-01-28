#include <iostream>
#include <string>
#include <vector>
using namespace std;


class AzimuthMonitoring
{   
    private:
   
    int fix(int degree)
    {
        while (degree < 0)
        {
            degree += 360;
        }
        while (degree >= 360)
        {
            degree -= 360;
        }
        return degree;
    }

     int degreefind(string instruction)
    {
        istringstream iss(instruction);
        string command;
        int degree;
        iss >> command >> degree ;
        return degree;
    }
    
    public:

    int getAzimuth(vector<string> instructions)
    {
        int final = 0;
        for (int i = 0; i < instructions.size(); ++i)
        {
            if (instructions[i] == "LEFT")
            {
                final -= 90;
            }
            else if (instructions[i] == "RIGHT")
            {
                final += 90;
            }

            else if (instructions[i] == "HALT" )
            {
                final = fix(final);
                return final;
            } 
            else if (instructions[i] == "TURN AROUND")
            {
                final += 180;
            }
            else if (instructions[i].find("LEFT ") != string::npos)
            {
                 final -= degreefind(instructions[i]);
            }
            else if (instructions[i].find("RIGHT ") != string::npos)
            {
                 final += degreefind(instructions[i]);
            }
            
        }
         final = fix(final);

      return final;
    }

};