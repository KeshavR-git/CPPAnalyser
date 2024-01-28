#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <stdlib.h>
using namespace std;


class AzimuthMonitoring{
public:
    int getAzimuth(vector<string> instructions){
        int res=0;
        for (unsigned int i=0;i<instructions.size();i++){
            string ss=instructions[i];
            if (ss=="LEFT"){
                res=res-90;
            }else if (ss=="RIGHT"){
                res=res+90;
            }else if (ss=="TURN AROUND"){
                res=res+180;
            }else if (ss.find("LEFT")!=ss.npos){
                char temp[ss.size()-4];
                for (int j=4;j<ss.size();j++){
                    temp[j-4]=ss[j];
                }
                int d=atoi(temp);
                res=res-d;
            }else if (ss.find("RIGHT")!=ss.npos){
                char temp[ss.size()-5];
                for (int j=5;j<ss.size();j++){
                    temp[j-5]=ss[j];
                }
                int d=atoi(temp);
                res=res+d;
            }else if (ss=="HALT"){
                break;
            }
        }
        while (res>=360){
            res=res-360;
        }
        while (res<0){
            res=res+360;
        }
        return res;
    }
};

