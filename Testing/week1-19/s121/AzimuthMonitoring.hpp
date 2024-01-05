#include <string>
#include <vector>
#include <iostream>
int XX_MARKER_XX;
class AzimuthMonitoring
{
public:
    int getAzimuth(std::vector<std::string> instructions)
    {
        int res = 0;
        bool check = true;
        std::string temp;
        int j;
        int length;
        int i = 0;
        while (check == true && i < instructions.size())
        {
            if (instructions[i] == "LEFT")
            {
                res = res - 90;
            }
            else if (instructions[i] == "RIGHT")
            {
                res = res + 90;
            }
            else if (instructions[i] == "TURN AROUND")
            {
                res = res + 180;
            }
            else if (instructions[i][0] == 'L' && instructions[i][4] == ' ')
            {
                j = 5;
                length = instructions[i].length();
                while (j < length)
                {
                    temp = temp + instructions[i][j];
                    j++;
                }
                //std::cout << "temp:   " << temp << std::endl;
                res = res - stoi(temp);
                temp = "";
            }
            else if (instructions[i][0] == 'R' && instructions[i][5] == ' ')
            {
                j = 6;
                length = instructions[i].length();
                while (j < length)
                {
                    temp = temp + instructions[i][j];
                    j++;
                }
                //std::cout << "temp:   " << temp << std::endl;
                res = res + stoi(temp);
                temp = "";
            }
            else if (instructions[i] == "HALT")
            {
                check = false;
            }
            i++;
        }

        while (res > 359)
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