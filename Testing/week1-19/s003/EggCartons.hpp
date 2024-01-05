#include <iostream> 
#include <algorithm> 
using namespace std;
int XX_MARKER_XX;
 
 
class EggCartons
{
  public:
  int minCartons(int n)
  {

    // if(n % 8 == 0) 
    // {
    //   mod8 = n/8; 
    // }
    // else if(n % 8 == 6) 
    // {
    //   mod8 = 1 + ((n-6)/8); 
    // }
    // else if(n % 6 == 0) 
    // {
    //   mod6 = n/6; 
    // }
    // else if(n % 6 == 2 && n > 6) 
    // {
    //   mod6 = 1 + ((n-8)/6); 
    // }

    int ret; 
    int max6 = 16;
    int max8 = 12; 
    int num6;
    int num8; 

    if (n % 2 == 0) 
    {
       for(int i = 0; i <= max6; i++) 
       {
        num6 = i * 6; 
        for(int j = 0; j <= max8; j++) 
        {
          num8 = j * 8; 

          if(num6 + num8 == n) 
          {
            return (i+j); 
          }
        }
       
       }

    }
    return -1; 
  }
};

