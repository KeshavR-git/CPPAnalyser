#include <iostream>
#include <string>
using namespace std;

 
class StreetParking
{
public:
int freeParks(string street){
    int len = street.length();
    int park = 0;
    for (int i = 0; i < len; ++i)
    {
      if (street[i] == '-' && street[i+1] != 'S' && street[i-1] != 'S' && street[i+1] !='B' && street[i+2] !='B')
      {
        park++;
      }

    }
    return park;
}

};