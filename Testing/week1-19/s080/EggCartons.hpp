#include<iostream>
#include<cmath> //For floor function
using namespace std;
int XX_MARKER_XX;

class EggCartons
{
	public:
	int minCartons(int n)
  	{	
  		//Return -1 IF 1) EVEN, LESS THAN 6, or 10. Otherwise this always is possible. 
		if(n%2!=0 || n<6 || n==10)
		{
			return -1;
		}
		else if(n%8==0)
		{
			//This returns the answer as we are only interested in the number of TOTAL egg cartons. 
			return floor(n/8);
		}
		return floor(n/8)+1;
	}
};
