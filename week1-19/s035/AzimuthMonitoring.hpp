#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class AzimuthMonitoring{
    public:
    int getAzimuth(vector<string> instructions){
        int size = instructions.size(); 
        int x[size];
        string ss[size];
        for(int i = 0; i < size; i ++){
            stringstream s(instructions[i]);       
            s >> ss[i] >> x[i];
        }
                
        int azimuth = 0;

        for(int i = 0; i < size; i++){

            if(ss[i] == "RIGHT" && instructions[i].length() == 5)
            {
                azimuth += 90;
                
                if(azimuth >=360){
                    azimuth = azimuth - 360;
                }

            }
            else if(ss[i] == "RIGHT" && instructions[i].length() > 5){
                azimuth += x[i];
                 
                if(azimuth >= 360){
                    azimuth = azimuth - 360;
                }
            }
            else if(ss[i] == "LEFT" && instructions[i].length() == 4)
            {
                azimuth -= 90;
                
                if(azimuth < 0){
                    azimuth = azimuth + 360;
                }

            }
            else if(ss[i] == "LEFT" && instructions[i].length() > 4){
                azimuth -= x[i]; 
                
                if(azimuth < 0){
                    azimuth = azimuth + 360;
                }
            }
            else if ( ss[i] == "TURN"){
                azimuth -= 180;
                
                if(azimuth >= 360){
                    azimuth = azimuth - 360;
                }
                if(azimuth < 0){
                    azimuth = azimuth + 360;
                }
            }
            else if(ss[i] == "HALT"){

                break;
            }
            
        }

        return azimuth;

    }
};