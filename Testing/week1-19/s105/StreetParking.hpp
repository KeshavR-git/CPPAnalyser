#include <iostream>
#include <string>
int XX_MARKER_XX;

#ifndef STREETPARKING_H
#define STREETPARKING_H

class StreetParking{

public:

  int freeParks(std::string street){

    int count = 0;
    bool valid = true;


    for(int i = 0; i<street.size();i++){
    //  std::cout<<"i: "<<i<<std::endl;

      if(street[i] != '-'){
        //std::cout<<"Not - "<<std::endl;
          valid = false;
        }

        if((i+1) <street.size()){



        if(street[i+1] == 'B' || street[i+1] == 'S'){

          //std::cout<<"i+1 = B or S "<<std::endl;
          valid = false;
        }
        }
        if((i-1)>=0){
        if(street[i-1] == 'S'){
          //std::cout<<"i-1 = S "<<std::endl;
          valid = false;
        }
        }

        if((i+2)>=0){
        if(street[i+2] == 'B'){
          //std::cout<<"i-2 = B "<<std::endl;
          valid = false;
        }

        }
        if(valid == true){
          count++;
        }

        valid = true;
    }


    return count;

  }
};
#endif
