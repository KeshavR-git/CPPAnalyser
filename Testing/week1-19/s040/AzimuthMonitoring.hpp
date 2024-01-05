#include <string>
#include <iostream>
#include <algorithm>
#include <math.h>  
#include <vector> 
using namespace std;
int XX_MARKER_XX;


class AzimuthMonitoring{
public:
    int getAzimuth(vector <string> instructions){
        int AzimuthNum=0;



        for(int i=0; i<instructions.size(); i++){
             //cout<<"part: "<<i<<" is: "<<instructions[i]<<endl;
         
            if((instructions[i]).size()<=5){
                 
                 
                if(instructions[i]=="RIGHT"||instructions[i]=="{RIGHT}"){
                    AzimuthNum=AzimuthNum+90;
                    //cout<<"right "<<AzimuthNum<<endl;
                }
                if(instructions[i]=="LEFT"||instructions[i]=="{LEFT}"){
                    AzimuthNum=AzimuthNum-90;
                  // cout<<"left "<<AzimuthNum<<endl;
                }
                if(instructions[i]=="HALT" || instructions[i]== "{HALT}"){
                    break;
                    //cout<<(instructions[i])[2]<<endl;
                }
            }else{
            


            size_t pos = instructions[i].find(" "); 
            string one=instructions[i].substr(0,pos);
            string two=instructions[i].substr(pos+1,instructions[i].size()-1);
            pos=0;
            
            if(one=="RIGHT" ){
               AzimuthNum+=stoi(two);
            }
            if(one=="LEFT"){
               AzimuthNum+=-stoi(two);
            }
            if(one=="TURN"){

                AzimuthNum+=-180;
                    //cout<<"num: "<<AzimuthNum<<endl;
            }

          
            //cout<<"position "<<pos<<"Word "<<one<<"Number "<<two<<endl;
           

            }
            if(AzimuthNum<=-1){
                AzimuthNum=360+AzimuthNum;

            }
            if(AzimuthNum>360){
                AzimuthNum=AzimuthNum-360;
            }
            if(AzimuthNum==360){
                AzimuthNum=0;
            }
            //cout<<"Azim: "<<AzimuthNum<<endl;
            
        }

    return AzimuthNum;
    }
};