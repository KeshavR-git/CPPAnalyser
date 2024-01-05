#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;
int XX_MARKER_XX;


class AzimuthMonitoring
{
    public:
    int getAzimuth(vector<string> instructions)
    {
        int instructSize, res;
        string angle, directions, instructVal, substring;
        res = 0;
        instructSize = instructions.size();

        for (int i = 0; i < instructSize; i++) {
            directions = instructions[i].substr(0, instructions[i].find(' '));
            angle = instructions[i].substr(instructions[i].find(' ') + 1);

            if (instructions[i] == "HALT") {
                res = fmod(res, 360);
                if (res < 0) {
                    res += 360;
                }
                return res;
            } else if (instructions[i] == "LEFT") {
                res -= 90;
            } else if (instructions[i] == "RIGHT") {
                res += 90;
            } else if (instructions[i] == "TURN AROUND") {
                res -= 180;
            } else if (directions == "LEFT") {
                res -= stoi(angle);   
            } else if (directions == "RIGHT") {
                res += stoi(angle);
            }

            if (res >= 360) {
                res -= 360;
            } else if (res <= 0) {
                res += 360;
            }
        }

        res = fmod(res, 360);
        if (res < 0) {
            res += 360;
        }
        return res;
    }
};
