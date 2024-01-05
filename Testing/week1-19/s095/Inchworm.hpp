#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
  	int rest1 = 0;
    int res=0;
    while(branch >= rest1){
      if (rest1%leaf==0)
      {
        res++;
      }
      rest1+=rest;
    }
    return res; 
  }
};
