#include <iostream>
using namespace std;

 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  
  // branch: Total distance of the Inchworm moves
  // rest: Distance of when inchworm gets rest
  // leaf: Distance of leaves appears
  {
    int res = 0;
    //Record the number of leaves which inchworm consumes

    for (int i = 0; i <= branch; i+=rest)
    {
    	if(i%leaf == 0){
    	//Judge if the movement can be divisible by leaf, 
    	//the inchworm can eat the leaf

    		res++;
    	}
    }
    return res;  
  }
};

