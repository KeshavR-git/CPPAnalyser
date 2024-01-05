#include <iostream>
using namespace std;
int XX_MARKER_XX;
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int res = 1; //set at 1 because worm always eats leaf at start of branch
    for (int i = 1; i <= branch; ++i)
    {
      if (i % rest == 0 && i % leaf == 0) //if match occurs
      {
        res++; //leaf eaten
      }
    }
    return res;  // return your result
  }
};