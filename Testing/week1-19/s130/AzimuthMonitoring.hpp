#include <vector>
#include <string>
#include <iostream>
int XX_MARKER_XX;

class AzimuthMonitoring {
public:
    int getAzimuth(std::vector<std::string> instructions)
    {
        int azimuth = 0;
        std::string temp;
        for (int i = 0; i < instructions.size(); i++)
        {
            temp = instructions.at(i);
            if (temp == "HALT")
            {
                break;
            }

            switch (temp.at(0))
            {
                case 'T':
                    azimuth = azimuth + 180;
                    break;
                case 'L':
                    if (temp.length() == 4)
                    {
                        azimuth = azimuth - 90;
                    }
                    else
                    {
                        temp.erase(temp.begin(),temp.begin()+5);
                        azimuth = azimuth - std::stoi(temp.c_str());
                    }
                    break;
                case 'R':
                    if (temp.length() == 5)
                    {
                        azimuth = azimuth + 90;
                    }
                    else
                    {
                        temp.erase(temp.begin(),temp.begin()+6);
                        azimuth = azimuth + std::stoi(temp);
                    }
                    break;
            }
        }

        if (azimuth % 360 < 0)
        {
            return (360 + (azimuth % 360));
        }
        return azimuth % 360;
    }
};
