#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <cctype>
#include <cstdlib>
using namespace std;
// Not all includes may be used, just default practice

/* Definition:
 
Current Speed (KB/s)
Remaining Time (s)
SumSpeeds (Total Bandwidth)
RatioDownloadSpeeds ([Old[3]/ NewSum[3+5] * [TimeRemainingSum[57-22]])
string[] tasks = single file downloaded (1 - 50)
    first int = current DS
    second int = RT
    return double representing time (s) for all downloads to finish
*/

class DownloadingFiles {
public:
    double actualTime(vector<string> tasks) {
        string currentSpeed, remainingTime;
        vector<vector<double> > holdVec;
        double totalBandwidth = 0, minTime = 0, difference = 0, ratio = 0, updRatio;
        double totalTime = 0;
        
        for (double i = 0; i < tasks.size(); i++) {
            // All strings into 2D vector
            vector<double> tmp;
            stringstream ss;
            ss << tasks[i];
            ss >> currentSpeed >> remainingTime;
            tmp.push_back(stoi(currentSpeed));
            tmp.push_back(stoi(remainingTime));
            holdVec.push_back(tmp);
            
            // Finding minimum time
            if (i == 0) {
                minTime = holdVec[0][1];
            }
            
            if (minTime > holdVec[i][1]) {
                minTime = holdVec[i][1];
                totalTime = minTime;
            }
            
            // Summing total bandwidth
            totalBandwidth += holdVec[i][0];
        }
        
        totalTime = minTime;
        for (double i = 0; i < holdVec.size(); i++) {
            double store1 = holdVec[i][1];
            double store2 = holdVec[i][0];
            
            difference = store1 - minTime;
            
            ratio = store2 / totalBandwidth;
            updRatio = difference * ratio;
            totalTime += updRatio;
        }
        return totalTime;
    }
};
