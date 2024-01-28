#include <vector>
#include <string>
#include <sstream>
#ifndef AZIMUTHMONITORING_H
#define AZIMUTHMONITORING_H


class AzimuthMonitoring {
public:
    int getAzimuth(std::vector<std::string> instructions) {
        int angle = 0;
        for (int i = 0; i < instructions.size(); i++) {
            if (instructions[i] == "HALT") {
                break;
            } else if (instructions[i] == "LEFT") {
                angle -= 90;
            } else if (instructions[i] == "RIGHT") {
                angle += 90;
            } else if (instructions[i] == "TURN AROUND") {
                angle += 180;
            } else if (instructions[i][0] == 'L') {
                std::stringstream ss;
                ss << instructions[i];
                std::string temp;
                int found;
                while (!ss.eof()) {
                    ss >> temp;

                    if (std::stringstream(temp) >> found)
                        angle -= found;
                }
            } else if (instructions[i][0] == 'R') {
                std::stringstream ss;
                ss << instructions[i];
                std::string temp;
                int found;
                while (!ss.eof()) {
                    ss >> temp;

                    if (std::stringstream(temp) >> found)
                        angle += found;
                }
            }
        }
        while (angle < 0) {
            angle +=360;
        }
        return angle%360;
    }
};

#endif
