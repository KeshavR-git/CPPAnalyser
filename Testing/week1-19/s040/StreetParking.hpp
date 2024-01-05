#include <string>
#include <iostream>
#include <algorithm>
#include <math.h>  
#include <vector>   
using namespace std;
int XX_MARKER_XX;


class StreetParking{

public:
    int freeParks(string street){
        int res=0;
        for(int i=0;i<street.size();i++){
            if(street[i]=='-'){
                //if(street[i+1]!='D'){
                    if(street[i+1]!='B' && street[i+2]!='B'){
                        if(street[i-1]!='S' && street[i+1]!='S'){
                            res++;
            

                        }
                    

                        
                    }

               // }
            }
        
            

            
        }    
        
        return res;

    }
};