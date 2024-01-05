#include <iostream>
#include <vector>
#include <string>
int XX_MARKER_XX;

class StreetParking
{
  public:
  int freeParks(std::string street)
  {
    int numOfFreeParks = 0;

    for(int i = 0; i < street.size(); i++){
      if(street[i] == 'D'){
        continue;
      }

      if(street[i] == 'B' || street[i+1] == 'B' || street[i+2] == 'B'){
        continue;
      }

      if(street[i] == 'S' || street[i+1] == 'S' || street[i-1] == 'S'){
        continue;
      }

      numOfFreeParks++;
    }

    return numOfFreeParks;
  }
};