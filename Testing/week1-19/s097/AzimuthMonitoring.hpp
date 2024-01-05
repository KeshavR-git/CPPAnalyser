#include <iostream>
#include <algorithm> 
#include <stdio.h>      
#include <math.h> 
#include <string> 
#include <vector>
using namespace std;
int XX_MARKER_XX;
 
class  AzimuthMonitoring
{
  public:
  int getAzimuth(vector <string> instructions){
    int facing = 0;
    while(!instructions.empty()){
      int turning = 0;
      char a = '0';
      if(instructions[0] == "LEFT"){
        turning = -90;
      }


      if(instructions[0] == "RIGHT"){
        turning = 90;
      }

      if(instructions[0] == "HALT")
      {
        turning = 0;
        break;
      }

      if(instructions[0] == "TURN AROUND")
        turning = 180;

      if(instructions[0].substr(0,5) == "LEFT "){
        turning = stoi( instructions[0].substr(5) ) * -1;
      }

      if(instructions[0].substr(0,6) == "RIGHT "){
        turning = stoi( instructions[0].substr(6) );
      }

      facing = facing + turning;

      if(facing < 0)
        facing = facing + 360;

      if(facing >= 360)
        facing = facing - 360;
      instructions.erase(instructions.begin());
      //cout<<facing<<endl;
    }
    return facing;
  }
};