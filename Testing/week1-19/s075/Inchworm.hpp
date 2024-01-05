#include <iostream>
using namespace std;
int XX_MARKER_XX;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {

    int res = 0; //sets a counter for how many leaves the worm will eat
    for (int  i = 0 ; i <= branch; i ++) {    //interates through the branch
        if ( i % rest == 0 && i % leaf == 0) { 
            res ++;
        }
    }
    return res;  
  }
};