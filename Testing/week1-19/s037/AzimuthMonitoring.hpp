#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
int XX_MARKER_XX;

 
class AzimuthMonitoring{
    public:

   	int getAzimuth(vector<string> instructions){
   		int angle = 0;
         int degree = 0;

         for(int i = 0; i < instructions.size(); i++){
            //degrees directions
            string dir = instructions[i].substr(0, instructions[i].find(' '));
            string deg = instructions[i].substr(instructions[i].find(' ') + 1);

            //turn instructions
            if(instructions[i] == "HALT"){
               return angleChange(angle);
            }else if(instructions[i] == "LEFT"){
               dir = "LEFT";
               angle -= 90;
            }else if(instructions[i] == "RIGHT"){
               dir = "RIGHT";
               angle += 90;
            }else if(instructions[i] == "TURN AROUND"){
               angle += 180;
            }else{
               //for specified degree for the turn
               degree = stoi(deg);
               if(dir == "LEFT"){
                  angle -= degree;
               }else if(dir == "RIGHT"){
                  angle += degree;
               }else{
                  //no direction
               }
            }
         }
         return angleChange(angle);
         }

         //adjust the change in angle boundary
         int angleChange(int newAngle){
            newAngle = fmod(newAngle, 360);
            if(newAngle < 0){
               newAngle += 360;
               return newAngle;
            }
         }
};	