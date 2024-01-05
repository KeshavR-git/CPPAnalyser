#include <iostream>
#include <vector>
using namespace std;
int XX_MARKER_XX;
 
 
class AzimuthMonitoring
{
  public:
  int getAzimuth(vector<string> instructions)
  {
    // your code for the problem
    int dir = 0;
    

    int size = instructions.size();
    
    for (int i=0; i<size;i++){
        if (instructions[i]=="RIGHT"){
            dir=dir+90;
        }
        if (instructions[i]=="LEFT"){
            dir=dir-90;
        }

        if ((instructions[i].substr(0,1)=="R")&&(instructions[i].length()>5)){
            int x = stoi(instructions[i].substr(5,4));
            dir=dir+x;
        }
        if ((instructions[i].substr(0,1)=="L")&&(instructions[i].length()>4)){
            int x = stoi(instructions[i].substr(5,4));
            dir=dir-x;
        }
        
        if (instructions[i]=="TURN AROUND"){
            dir=dir-180;
        }
      
        if (instructions[i]=="HALT"){
             while(dir>359){
              dir=dir-360;
             }
             while(dir<0){
               dir=dir+360;
             }
             return dir;
         }
         
    }
    int modcheck = dir%360;
    if(modcheck==0){
      dir=0;
    }
    while(dir>359){
        dir=dir-360;
    }
    while(dir<0){
        dir=360+dir;
    }
    return dir;
    
    
  
  }
};
