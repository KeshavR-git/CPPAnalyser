#include <iostream>
using namespace std;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
  	int ate = 0;  
    for(int i=0; i<=branch; i += rest)
    {
    	if(i%leaf==0)
    	{
    		ate += 1;
    	}
    }
    return ate;  // return your result
  }
};