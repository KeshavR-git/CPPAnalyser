#include <iostream>
using namespace std;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int res = 0;
    int check; 

    for(int wormPos = 0; wormPos <= branch; wormPos += rest) {
      check = wormPos%leaf ;
      if( check == 0) {
        res++;
      }
    }
    return res;  
  }
};





