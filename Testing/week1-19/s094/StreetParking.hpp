#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;
class StreetParking
{
public:
    int freeParks(string street)
    {
        int parkingSpace = 0;
        for(int i = 0; i < street.length(); i++)
        {
            if(street.length()==1 && street.at(0) == '-')
            {
                return 1;
            }
            else if(street.length()==1 && street.at(0) != '-')
            {
                return 0;
            }
            if(street.at(i) == 'D') continue;
            if(street.at(i) == 'B') continue;
            if(street.at(i) == 'S') continue;
            if(i < street.length()-1 && street.at(i+1) == 'B') continue;
            if(i < street.length()-2 && street.at(i+2) == 'B') continue;
            if(i < street.length()-1 && street.at(i+1) == 'S') continue;
            if(i > 0 && street.at(i-1) == 'S') continue;
            parkingSpace++;
        }
        return parkingSpace;
    }
};