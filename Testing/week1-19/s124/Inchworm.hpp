#include <iostream>
using namespace std;
int XX_MARKER_XX;



class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
  	int res = 0; // the first leaf is always eaten
   
  	for (int i = 0; i <= branch; i+= rest){
  		if(i % leaf == 0)
  		{
  			res ++;
  		}
  	}

    return res;  // return your result
  }
};