#include<iostream>
using namespace std;
int XX_MARKER_XX;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
  	int res = 0;
    if ((branch >= 1 && branch <= 1000000) && (rest >= 1 && rest <= 1000) && (leaf >= 1 && leaf <= 1000))
    {
    	for (int i = 0; i <= branch; i++)
    	{
    		if (i % rest == 0 && i % leaf == 0)
    		{
    			res ++;
    		}
    	}
    }    
    return res;  
  }
};