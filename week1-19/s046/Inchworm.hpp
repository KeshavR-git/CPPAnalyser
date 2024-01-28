#include <iostream>
using namespace std;
 
 
class Inchworm
{
  public:
  // takes 3 inputs and returns the number of leaves the inchworm will stop at.
  int lunchtime(int branch, int rest, int leaf)
  {
  	int res=1;
    int leafsize=leaf;
  	if (rest>branch)
  		{
  		return res; 
  		}
    for (int i = rest; i < branch+1; i=i+rest)
    	{
    	while (i>leaf)
    		{
    			leaf=leaf+leafsize;
    		}
    	if (i==leaf)
    		{
    			res++;
    		}
    }
    return res;  
  }
};