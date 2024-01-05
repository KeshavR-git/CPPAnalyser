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


class CircularLine {
public:
    int longestTravel(vector<int> t) {
        int arrSize = t.size();
        int sizeA = 0, sizeB = 0, totalSize = 0, currentNode = 0, prevRouteA = 0, routeA = 0, routeB = 0, count = -1, tmp = 0, counter = 0;
        int max = 0;
        vector<int> tracks;
        
        // Finding total length initially
        for (int i = 0; i < arrSize; i++) {
            totalSize += t[i];
        }
        for (int i = 0; i < arrSize + counter; i++) {
            routeA = t[i] + prevRouteA;
            prevRouteA = routeA;
            routeB = totalSize - routeA;
            
            if (routeB == 0) {
                count++;
                i = count;
                prevRouteA = 0;
                continue;
            }
            if (i + 1 == arrSize + counter) {
                // Rotate Vector
                tmp = t[arrSize-1];
                t.insert(t.begin(), tmp);
                t.pop_back();
                
                routeA = t[i+counter] + prevRouteA;
                prevRouteA = routeA;
                routeB = totalSize - routeA;
                
                if (routeB == 0) {
                    //cout << "crash" << endl;
                    count++;
                    i = count + 1;
                    prevRouteA = 0;
                    counter++;
                    continue;
                }
            }
            //cout << "A: " << routeA << "    B: " << routeB << "    P: "<< prevRouteA << "    i: " << i << "    c: " << counter <<endl;
            // Comparison
            if (routeA < routeB) {
                tracks.push_back(routeA);
            }
            else {
                tracks.push_back(routeB);
            }
        }
        for (int i = 0; i < tracks.size(); i++) {
            if (tracks[i] > max) {
                max = tracks[i];
            }
            //cout << tracks[i] << endl;
        }
        
        
        
        
        return max;
    }
};
