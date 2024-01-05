#include <algorithm>
#include <math.h>
#include <iostream>
using namespace std;
int XX_MARKER_XX;

class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    float res =1+( floor((branch + 0.0) / ((rest*leaf)/__gcd(rest,leaf))));
    return res;
  }
};