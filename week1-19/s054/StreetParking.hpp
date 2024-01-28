#include <iostream>
using namespace std;

 
 
class StreetParking
{
  public:
  int freeParks(string street)

  {
    int res = 0;
    //The number of parking space
     for (int i = 0; i < street.length(); i++)
    {
      if ((street[i] == 'D') || (street[i] == 'B') || (street[i] == 'S'))
        continue;
      //It isn't directly in front of a private driveway, bus stop and side-street 

      if ((i < street.length() - 1) && (street[i + 1] == 'B'))
        continue;
      //It is not 5 meters before a bus stop.

      if ((i < street.length() - 2) && (street[i + 2] == 'B'))
        continue;
      //It is not 10 meters before a bus stop.

      if ((i < street.length() - 1) && (street[i + 1] == 'S'))
        continue;
      //It is not 5 meters before a side-street.

      if ((i > 0) && (street[i - 1] == 'S'))
        continue;
      //It is not 5 meters before a bus stop.

      res++;
      //Count the rest sections of street which is the appropriate parking space 
    }
    
    return res;  
  }
};

