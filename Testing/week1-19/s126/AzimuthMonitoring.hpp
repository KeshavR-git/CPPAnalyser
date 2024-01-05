#include <iostream>
#include <string>
#include <vector>
using namespace std;
int XX_MARKER_XX;
#ifndef AZIMUTHMONITORING_H
#define AZIMUTHMONITORING_H



class AzimuthMonitoring {
    void square_up(int &result) {
        if (result < 0) {
            result+=360;
        } else if (result >= 360) {
            result-=360;
        }
    }
public:
    int getAzimuth(vector<string> t) {
        int result = 0;
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == "HALT") {
                break;
            } else if (t[i] == "LEFT") {
                result-=90;
                square_up(result);
            } else if (t[i] == "RIGHT") {
                result+=90;
                square_up(result);
            } else if (t[i] ==  "TURN AROUND") {
                if (result >= 0 && result < 180) {
                    result+=180;
                    square_up(result);
                } else {
                    result-=180;
                    square_up(result);
                }
            } else {
                string temp = t[i];
                if (temp[0] == 'L') {
                    if (temp.length() == 6) {
                        temp.erase(0,5);
                        result-=stoi(temp);
                        square_up(result);
                    } else if (temp.length() == 7) {
                        temp.erase(0,5);
                        result-=stoi(temp);
                        square_up(result);
                    } else {
                        temp.erase(0,5);
                        result-=stoi(temp);
                        square_up(result);
                    }
                } else {
                    if (temp.length() == 8) {
                        temp.erase(0,6);
                        result+=stoi(temp);
                        square_up(result);
                    } else if (temp.length() == 9) {
                        temp.erase(0,6);
                        result+=stoi(temp);
                        square_up(result);
                        square_up(result);
                    } else {
                        temp.erase(0,6);
                        result+=stoi(temp);
                        square_up(result);
                        square_up(result);
                    }
                }
            }
        }
        
        return result;
    }
};

#endif


