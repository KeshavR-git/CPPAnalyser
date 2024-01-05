#include <vector>
#include <iostream>
using namespace std;
int XX_MARKER_XX;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int res = 1;

    for (int i = 1; i <= branch; i++) {
        if (i % rest == 0 && i % leaf == 0) {
            res++;
        }
    }

    return res;  // return your result
  }
};