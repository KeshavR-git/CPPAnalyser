#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <cctype>
#include <cstdlib>
using namespace std;
int XX_MARKER_XX;
// Not all includes may be used, just default practice

class PartySeats {
public:
    vector<string> seating(vector<string> attendees) {
        vector<string> holdVecBoy, holdVecGirl, result, empty;
        string name, gender;
        int totalSize, g = 0, f = 0;
        
        if (attendees.size() % 4 != 0 || attendees.size() <= 2) {
            return empty;
        }
        
        for (int i = 0; i < attendees.size(); i++) {
            // All strings into 2D vector
            vector<string> tmp;
            vector<string> tmp1;
            
            stringstream ss;
            ss << attendees[i];
            ss >> name >> gender;
            
            if (gender == "boy") {
                holdVecBoy.push_back(name);
                continue;
            }
            else if (gender == "girl") {
                holdVecGirl.push_back(name);
                continue;
            }
        }
        sort(holdVecBoy.begin(), holdVecBoy.end());
        sort(holdVecGirl.begin(), holdVecGirl.end());
        
        totalSize = holdVecBoy.size() + holdVecGirl.size();
        
        if (holdVecBoy.size() != holdVecGirl.size()) {
            return empty;
        }
        
        
        
        int difference = holdVecBoy.size() - holdVecGirl.size();
        for (int i = -1; i <= totalSize; i++) {
            // Host Case
            if (i == -1) {
                result.push_back("HOST");
                continue;
            }
            // Hostess Case
            if (i == totalSize/2) {
                result.push_back("HOSTESS");
                continue;
            }
            // Girl Case
            if (i % 2 == 0) {
                result.push_back(holdVecGirl[g]);
                g++;
                continue;
            }
            // Boy Case
            else if (i % 2 == 1) {
                result.push_back(holdVecBoy[f]);
                f++;
                continue;
            }
        }
        return result;
    }
};
