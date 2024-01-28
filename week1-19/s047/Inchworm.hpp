#include "math.h"
using namespace std;
 

class Inchworm
{
  public:

  int lunchtime(int branch, int rest, int leaf)
  {
  	int leaves_consumed = 1; //inchworm eats at the start of the branch
  	int inchworm_currentpos = rest; //tracks position of inchworm

  	while(inchworm_currentpos <= branch)
  	{
  		if (inchworm_currentpos % leaf == 0)
  		{
  			leaves_consumed++;
  		}

  		inchworm_currentpos += rest;
  	}
    
    return leaves_consumed;  // return the number of leaves the inchworm has eaten
  }

};