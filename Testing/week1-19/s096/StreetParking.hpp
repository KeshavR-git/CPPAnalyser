#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;


class StreetParking{
public:
    int freeParks(string street){
        int count=0;
        for(int i=0;i< street.size();i++){
            if(street[i] != 'D' && street[i] != 'B' && street[i] != 'S'){
                if(i==0){
                    if(street[i+1] != 'B' && street[i+2] != 'B' && street[i+1] !='S'){
                    count++;
                    }
                }
                else if(i == street.size() - 1){
					if(street[i-1] != 'S'){
                        count++;
                    }
				}
				else if(i == street.size() - 2){
					if(street[i+1] != 'B' && street[i+1] != 'S' && street[i-1] != 'S'){
                        count++;
                    }
				}
                else{
                    if(street[i+1] != 'B' && street[i+2] != 'B' && street[i+1] != 'S' && street[i-1] != 'S'){
                    count++;
                    }
                }  
            }   
        }
    return count;
    }
};