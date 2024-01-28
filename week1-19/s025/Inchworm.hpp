#include <iostream>
using namespace std;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    // your code for the problem
    int runningSum = 0;
    int leafDistance = 0;
    if(branch < 1 || rest < 1 || leaf < 1 || branch > 1000000 || rest > 1000 || leaf > 1000){
    	return -1;
    }

    while(leafDistance <= branch){
    	if(leafDistance % rest == 0){
    		runningSum++;
    	} 
    	leafDistance += leaf;
    }
    return runningSum;  // return your result
  }
};