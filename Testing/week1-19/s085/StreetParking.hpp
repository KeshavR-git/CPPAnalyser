#include <stdio.h>
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
        for(int i=0; i < street.size(); i++) {
            //10m before bus stop
            if(street[i] == '-' && (street[i+1] != 'B' && street[i+1] != 'S') && street[i+2] != 'B' && street[i-1] != 'S') {
                result++;
               
            } else if(street[i] == '-' && street[i+1] == '-' && street[i+2] != 'S' && street[i+2] != 'B' && street[i-1] != 'S') {
                result++;
               
            } else if(i == (street.size()-1) && street[i] == '-' && (street[i-1] != 'S') && (street[i-2] != 'S')) {
                result++;
            }
        }
        return result;
    }
};
#endif
