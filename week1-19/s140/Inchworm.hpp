#include <iostream>
using namespace std; 
class Inchworm
{
  public:
 
  int lunchtime(int branch, int rest, int leaf)
  {
  	int lcm;
  	int res = 0;
  	int value = 0;
  	if(rest > branch || leaf > branch){
  		res++;
    return res;
    }
    // your code for the problem
    if (rest > leaf){
         lcm = rest;
    } 
    else {
    	lcm = leaf;
    }
    while (1){
    	if (lcm%rest == 0 && lcm%leaf == 0){
    	break;
    	}
    	lcm++;
    }
    //Code start here
    while(value <= branch){
         res+=1;
         value+=lcm;
    }
    return res;  // return your result
  }
};