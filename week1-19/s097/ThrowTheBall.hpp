#include <iostream>
#include <algorithm> 
#include <stdio.h>      
#include <math.h> 
#include <string> 
using namespace std;
 
class ThrowTheBall
{
  public:

  int gcd(int a, int b){
  	if(b==0)
  		return a;
  	return gcd(b,a%b);
  }
  int lcm(int a,int b) 
  {
    return a*b/gcd(a,b);
  }

  int timesThrown(int N, int M, int L)
  {
    int loop = lcm(N,L)/L;
    int res = loop*(M-1);

    return res;  // return your result
  }
};
