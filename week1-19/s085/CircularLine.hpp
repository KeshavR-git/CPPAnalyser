#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#ifndef CIRCULARLINE_hpp
#define CIRCULARLINE_hpp



class CircularLine {
    
public:

    int longestTravel(vector <int> t) {
        int dis = 0;
        for (int i = 0; i < t.size(); i++) {
            for (int j = i + 1; j < t.size(); j++) {
                int a = 0;
                int b = 0;
                for (int k = i; k < j; k++) {a += t[k];}
                    for (int k = j; k < t.size(); k++) {b += t[k];}
                        for (int k = 0; k < i; k++) {b += t[k];}
                    dis = max(dis, min(a,b));
            }
        }
        return dis;
    }
};
#endif
