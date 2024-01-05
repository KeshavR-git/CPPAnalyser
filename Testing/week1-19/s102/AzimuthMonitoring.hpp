#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <cctype>
#include <cstdlib>
using namespace std;
int XX_MARKER_XX;
// Not all includes may be used, just default practice

class AzimuthMonitoring {
public:
    int getAzimuth(vector<string> instructions) {
        int degree = 0, pos = 0, tmp = 0;
        string exp;

        for (int i = 0; i < instructions.size(); i++) {
            exp = instructions[i];
            
            if (exp.find("RIGHT ") != string::npos) {
                pos = exp.find(" ") + 1;
                exp.erase(exp.begin(), exp.begin()+pos);
                tmp = stoi(exp);
                degree += tmp;
                continue;
            }
            if (exp.find("LEFT ") != string::npos) {
                pos = exp.find(" ") + 1;
                exp.erase(exp.begin(), exp.begin()+pos);
                tmp = stoi(exp);
                degree += 360 - tmp;
                continue;
            }
            if (exp.find("LEFT") != string::npos) {
                degree += 270;
                continue;
            }
            if (exp.find("RIGHT") != string::npos) {
                degree += 90;
                continue;
            }
            if (exp.find("TURN AROUND") != string::npos) {
                degree += 180;
                continue;
            }
            if (exp.find("HALT") != string::npos) {
                break;
            }
        }
        return degree % 360;
    }
};
