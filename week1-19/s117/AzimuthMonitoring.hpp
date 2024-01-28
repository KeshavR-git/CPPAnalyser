#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <stack>

class AzimuthMonitoring
{
public:
    std::vector<std::string> inputHandle(std::string temp)
    {
        // std::string temp;
        // std::getline(std::cin, temp);
        std::istringstream OtherTemp(temp);
        std::string a;
        std::vector<std::string> input;
        while (OtherTemp >> a)
        {
            if (!a.empty())
            {
                input.push_back(a);
            }
        }
        return input;
    }

    double wrapAround(double a)
    {
        while (true)
        {
            if (a < 0)
            {
                a += 360;
                continue;
            }
            if (a >= 360)
            {
                a -= 360;
                continue;
            }
            break;
        }
        return a;
    }

    double getAzimuth(std::vector<std::string> instructions)
    {
        double azimuth = 0.0;

        std::size_t offset = 2;
        int i = 0;
        while (i<instructions.size())
        {
            if (instructions[i] == "LEFT")
            {
                azimuth -= 90;
            }
            else if (instructions[i] == "RIGHT")
            {
                azimuth += 90;
            }
            else if (instructions[i].find("LEFT") != std::string::npos)
            {
                std::vector<std::string> temp = inputHandle(instructions[i]);
                azimuth -= std::stod(temp[1], &offset);
            }
            else if (instructions[i].find("RIGHT") != std::string::npos)
            {
                std::vector<std::string> temp = inputHandle(instructions[i]);
                azimuth += std::stod(temp[1], &offset);
            }
            else if (instructions[i] == "TURN AROUND")
            {
                azimuth -= 180;
            }
            else if (instructions[i] == "HALT")
            {
                break;
            }
            else
            {
                break;
            }
            i++;
        }
        azimuth = wrapAround(azimuth);
        return azimuth;
    }
};