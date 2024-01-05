#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;
 
class EggCartons
{
  public:
  int minCartons(int n)
  {
    int m = n/8;
    int l=0;
    int container=0;
    if (n%8!=0)
    {
      for (int i = m; i >= 0; --i)
      {
        l = n-8*i;
        if (l%6==0)
        {
          container = i+l/6;
          break;
        }
        else if(l%6!=0){
          container = -1;
        }
      }
    }
    else{
      container = n/8;
  }
  if (n<6)
  {
    container = -1;
  }
  return container;
  }
};
