#include <string>
using namespace std;
int XX_MARKER_XX;


class StreetParking
{
  public:
  int freeParks(string street)
  {
    int parks = 0;
    bool flag;

    for (int i = 0; i < street.length(); ++i)
    {
      flag = false;

      if (street[i] == '-')
      {

        flag = true;

        if (i >= 1)
        {
          if (street[i-1] == 'S')
          {
            flag = false;
          }
        }

        if (i <= ( street.length() - 2) )
        {
          if ( (street[i+1] == 'B') || (street[i+1] == 'S') )
          {
            flag = false;
          }
        }

        if (i <= ( street.length() - 3))
        {
          if (street[i+2] == 'B')
          {
            flag = false;
          }
        }
      }

      if (flag == true)
      {
        parks++;
      }
    }

    return parks;

  }
};