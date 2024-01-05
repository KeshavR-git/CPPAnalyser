#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int XX_MARKER_XX;

 
class StreetParking{
    public:
  
    int freeParks(string street) {
        int count = 0;
        int FiveBefore = 0;    //5m before Bus stop
        int TenBefore = 0;
        int FiveAfter = 0;

        for(int i = 0; i < street.length(); i++) {
            //if there is parking spot available or not
            if(street[i] == 'D' || street[i] == 'B' || street[i] == 'S') {
               cout << "closed" << endl; 
            }
            else {
                FiveBefore = i + 1;
                TenBefore = i + 2;
                FiveAfter = i - 1;    //Five metres after side-street

                if(street[FiveBefore] == 'B' || street[FiveBefore] == 'S') {
                //5m before stop or 5m before side street
                }
                else if(street[TenBefore] == 'B') {
                //10m before stop
                }
                else if(street[FiveAfter] == 'S') {
                //5m after side street
                }
                else {
                    //increment parking spots
                    count++;
                }
            }
        }
        return count;
    }
};