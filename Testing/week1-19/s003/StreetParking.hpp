#include <iostream> 
#include <string>
using namespace std;
int XX_MARKER_XX;
 
 
class StreetParking
{
  public:
  int freeParks(string street)
  {
   
// 3.  It is not 5 meters before a bus stop.
// 4.  It is not 10 meters before a bus stop.
// 6.  It is not 5 meters before a side-street.
// 7.  It is not 5 meters after a side-street.

    int length = street.length(); 
    int park = 0; 

    for(int i = 0; i <length; i++) 
    {
      if(street[i] == '-') 
      {

        if(street[i+1] != 'B' && street[i+2] != 'B' && street[i-1] != 'S' && street[i+1] != 'S') 
        {
          park++; 
        }

      }
    }
    return park; 
  }
};

