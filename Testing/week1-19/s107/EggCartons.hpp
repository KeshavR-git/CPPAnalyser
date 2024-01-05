#include <iostream>
using namespace std;
int XX_MARKER_XX;

 
class EggCartons
{
  public:
  int minCartons(int n)
  {
    int res = 0;

    if ( n == 6 || n == 8)
    {
      res = 1;
    }

    else if ( n % 2 != 0 || n < 6)
    {
      res = -1;
    }

    else
    {
      while ( n % 8 != 0)
      {
        res ++;
        n = n - 6;
      }
      if ( n >= 0)
      {
        res = res + n / 8;
      }
      else
      {
        res = -1;
      }
    }
    return res;
  }
};