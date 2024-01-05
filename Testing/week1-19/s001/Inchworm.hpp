#include <iostream>
using namespace std;
int XX_MARKER_XX;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    // your code for the problem
  	int res = 0;
  	for (int i = 0; i<=branch; i+= rest){
  		int mod = i%leaf;
  		if(mod==0){
  			res+=1;
  		}
  	}

    return res;  // return your result
  }
};
