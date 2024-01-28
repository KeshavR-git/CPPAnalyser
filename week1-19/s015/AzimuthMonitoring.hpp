#include <vector>
#include <string>
#include <sstream>
#ifndef AzimuthMonitoring_hpp
#define AzimuthMonitoring_hpp

class AzimuthMonitoring{

    public:

        int getAzimuth(std::vector<std::string> instructions){
            int azimuth = 0;
            int degree = 0;
            std::string str;
            for (int i = 0; i < instructions.size(); i++){
                if (instructions[i] == "LEFT"){
                    azimuth = azimuth - 90;
                } else if (instructions[i] == "RIGHT"){
                    azimuth = azimuth + 90;
                } else if (instructions[i] == "TURN AROUND"){
                    azimuth = azimuth + 180;
                } else if (instructions[i].find("LEFT ") != std::string::npos){
                    std::stringstream ss(instructions[i]);
                    ss >> str >> degree;
                    azimuth = azimuth - degree;
                } else if (instructions[i].find("RIGHT ") != std::string::npos){
                    std::stringstream ss(instructions[i]);
                    ss >> str >> degree;
                    azimuth = azimuth + degree;
                } else if (instructions[i] == "HALT"){
                    while (azimuth < 0){
                        azimuth = azimuth + 360;
                    }
                    while (azimuth > 360){
                        azimuth = azimuth - 360;
                    }
                    if (azimuth == 360){
                        azimuth = 0;
                    }
                    return azimuth;
                }
            }
            while (azimuth < 0){
                azimuth = azimuth + 360;
            }
            while (azimuth > 360){
                azimuth = azimuth - 360;
            }
            if (azimuth == 360){
                azimuth = 0;
            }
            return azimuth;
        }
};
#endif