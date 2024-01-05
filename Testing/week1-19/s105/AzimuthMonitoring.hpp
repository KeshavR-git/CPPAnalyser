#include <iostream>
#include <vector>
#include <string>
int XX_MARKER_XX;

#ifndef AZIMUTHMONITORING_H
#define AZIMUTHMONITORING_H

class AzimuthMonitoring{

public:

  int mod(int a, int base){
    return ((a % base) + base) % base;
  };

  int getAzimuth(std::vector<std::string> input){
    int moves = input.size();
    int result = 0;

    for(int i = 0; i< moves;i++){
      if(input[i] == "HALT"){
        return result;
      }else if (input[i] == "LEFT"){
        result = mod((result-90),360);
      }else if (input[i] == "RIGHT"){
        result = mod((result+90),360);
      }else if (input[i] == "TURN AROUND"){
        result = mod((result+180),360);
      }else{
          if(input[i][0] == 'L' && input[i][1] == 'E' && input[i][2] == 'F' &&input[i][3] == 'T' && input[i][4] == ' '){
            input[i].erase(input[i].begin(),input[i].begin()+5);
            result = mod((result-std::stoi(input[i])),360);
          }else if(input[i][0] == 'R' && input[i][1] == 'I' && input[i][2] == 'G' &&input[i][3] == 'H' && input[i][4] == 'T' && input[i][5] == ' '){
            input[i].erase(input[i].begin(),input[i].begin()+6);
            result = mod((result+std::stoi(input[i])),360);
          }

      }
    }
    return result;
  }


};
#endif
