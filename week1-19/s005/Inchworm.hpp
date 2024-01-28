#include <iostream>
using namespace std;

class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int res = 0;

    for(int i=0;i<=branch;i++){

    	if(i%rest==0&&i%leaf==0){ //due to modulo, res is always added to if branch >= 1
    		res++;
    	}

    }

    return res;
  }
};