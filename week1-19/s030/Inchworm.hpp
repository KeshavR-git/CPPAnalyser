#include <iostream>
using namespace std;


class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int i = 0;
    int res = 0;

    while(i<=branch){
      if(i%rest==0){res++;}
      i = i+leaf;
   }
    return res;  // return your result
  }
};