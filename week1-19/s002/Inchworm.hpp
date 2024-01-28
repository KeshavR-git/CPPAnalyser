#include <iostream>
using namespace std;

 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    // your code for the problem
    int res=0;
    int running_dist=0;

    while (running_dist <= branch) {
    	
    	if (running_dist % leaf == 0) {
    		res++;
    	}
    	running_dist += rest;
    }

    return res;  // return your result
  }
};