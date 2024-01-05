#include <iostream>
#include <algorithm> 
#include <stdio.h>      
#include <math.h> 
#include <string> 
using namespace std;
int XX_MARKER_XX;
 
class Inchworm
{
  public:

  int gcd(int a, int b){
  	if(b==0)
  		return a;
  	return gcd(b,a%b);
  }

  int lunchtime(int branch, int rest, int leaf)
  {
    int GCD = gcd(rest,leaf);
    int lcm = (rest*leaf)/GCD;
    int res = (branch/ lcm)  + 1;
    return res;  // return your result
  }
};
