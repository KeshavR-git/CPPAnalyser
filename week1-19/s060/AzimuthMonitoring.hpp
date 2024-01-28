#include <sstream>
#include <string>
#include <vector>
#ifndef AZIMUTH_H
#define AZIMUTH_H


class AzimuthMonitoring{
    public:
        int getAzimuth(std::vector<std::string> instructions){
            int angle = 0;
            for (int i = 0; i < instructions.size(); i++){
                // Determine instruction
                std::stringstream s(instructions[i]);
                std::string words[2];
                std::string word;
                int a = 0;
                while (s >> word){
                    words[a] = word;
                    a++;
                }

                // Run instruction
                // If there are two strings then it is either "TURN AROUND", "LEFT X" or "RIGHT X"
                if (a == 2){
                    if (words[0].compare("LEFT") == 0){
                        angle -= std::stoi(words[1]);
                    } else if (words[0].compare("RIGHT") == 0){
                        angle += std::stoi(words[1]);
                    } else if (words[0].compare("TURN") == 0){
                        angle += 180;
                    }
                // Otherwise it's "LEFT", "RIGHT" or "HALT"
                } else {
                    if (words[0].compare("LEFT") == 0){
                        angle -= 90;
                    } else if (words[0].compare("RIGHT") == 0){
                        angle += 90;
                    } else if (words[0].compare("HALT") == 0){
                        i = instructions.size();
                    }
                }

                // Fix angle
                if (angle < 0){
                    angle += 360;
                } else if (angle >= 360){
                    angle -= 360;
                }
            }

            return angle;
        }
};

#endif