#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;

#ifndef STREETPARKING_H
#define STREETPARKING_H



class StreetParking {
public:
    int freeParks(string street) {
        int result = 0;
        
        for (int i = 0; i < street.length(); i++) {
            if (street[i] != '-') {
                continue;
            }
            if (i == 0) {
                if (street[i+1] != 'S' && street[i+1] != 'B' && street[i+2] != 'B') {
                    result++;
                }
            } else if (i == street.length()-1) {
                if (street[i-1] != 'S') {
                    result++;
                }
            } else {
                if (street[i+1] != 'B' && street[i+1] != 'S' && street[i+2] != 'B' && street[i-1] != 'S') {
                    result++;
                }
            }
        }
        
        return result;
    }
};

#endif

