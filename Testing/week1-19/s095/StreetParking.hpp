#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;
 
class StreetParking
{
  public:
  int freeParks(string street)
  {
    int res = 0;
    int nstreet[street.length()];
    for (int i = 0; i <= street.length(); ++i)
    {
      nstreet[i] = 1;
    }
    for (int i = 0; i <= street.length(); ++i)
    {
      if (street[i] == 'B')
      {
        nstreet[i]=0;
        nstreet[i-1]=0;
        nstreet[i-2]=0;
      }
      else if (street[i]=='S')
      {
        nstreet[i] = 0;
        nstreet[i-1]=0;
        nstreet[i+1]=0;
      }
      else if (street[i]=='D')
      {
        nstreet[i]=0;
      }

    }
    for (int i = 0; i < street.length(); ++i)
    {
      if (nstreet[i]==1)
      {
        res++;
      }
    }
    return res; 
  }
};
