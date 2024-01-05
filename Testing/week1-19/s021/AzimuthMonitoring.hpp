#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream> 
int XX_MARKER_XX;

class AzimuthMonitoring
{
public: 
    int getAzimuth(std::vector<std::string> instructions)
    {
        int d = 0;
        for (int i=0; i<instructions.size(); i++)
        {
            std::string ins = instructions[i];

            if (ins == "LEFT")
            {
                d += 270;
            }
            else if (ins == "RIGHT")
            {
                d += 90;
            }
            else if (ins == "TURN AROUND")
            {
                d += 180;
            }
            else if (ins == "HALT")
            {
                return (d%360);
            }
            else
            {
                std::string LorR;
                int degree;
                std::stringstream ss;
                ss << ins;
                ss >> LorR >> degree;

                if (LorR == "LEFT")
                {
                    d += (-degree%360) + 360;
                } 
                else if (LorR == "RIGHT")
                {
                    d += degree;
                }
            }
        }
        return (d%360);
    }
};