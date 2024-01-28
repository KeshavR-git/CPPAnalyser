#include <stdio.h>
#include <vector>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;
#ifndef AZIMUTHMONITORING_H
#define AZIMUTHMONITORING_H




class AzimuthMonitoring {
    
public:
    int extractDegree(string instruction) {
        
        istringstream iss(instruction);
        string command;
        int degree;
        iss >> command >> degree ;
        return degree;
    }
    int fixDegree(int degree) {
        while (degree < 0) {
            degree += 360;
        }
        while (degree >= 360) {
            degree -= 360;
        }
        return degree;
    }
   int getAzimuth(vector <string> instructions) {
       int azimuth = 0;
       
       for(int i=0; i<instructions.size(); i++) {
           if(instructions[i] == "HALT") {
               azimuth=fixDegree(azimuth);
               return azimuth;
           } else if(instructions[i] == "LEFT") {
               azimuth-=90;
           } else if(instructions[i] == "RIGHT") {
               azimuth+=90;
           } else if(instructions[i] == "TURN AROUND") {
               azimuth+=180;
           } else if(instructions[i].find("LEFT ") != string::npos) {
               azimuth-=extractDegree(instructions[i]);
           } else if(instructions[i].find("RIGHT ") != string::npos) {
               azimuth+=extractDegree(instructions[i]);
           }
        }
       azimuth=fixDegree(azimuth);
       return azimuth;
    }
};
#endif
