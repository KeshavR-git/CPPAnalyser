#include <iostream>
#include <string>
using namespace std;


class StreetParking{
    public:
    int freeParks(string street){
        
        int counter=0;
        int space = street.length();
        for(int i = 0; i < space; i++){

            if (street[i] == 'D'){
                counter++;
            }
            if(street[i] == 'S'){
                counter++;

                if(street[i+1] == '-'){
                    counter++;
                }
                if(street[i-1] == '-'&& street[i-2]!='S'){
                    counter++;
                }
            }
            if(street[i] == 'B'){
                counter++;
                if(street[i-1] == '-' && street[i-2]!='S'){
                    counter++;
                    if(street[i-2] == '-' && street[i-3]!='S'){
                        counter++;
                    }
                }
                
            }
        }

        space = space-counter;

        return space;
    }
};
