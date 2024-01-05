#include <iostream>
using namespace std;
int XX_MARKER_XX;
 
 
class Inchworm
{
	public:
	int lunchtime(int branch, int rest, int leaf)
	{
	// your code for the problem
	int res=0;
	int forward=0;
	while(forward<=branch){
		if(forward%leaf==0){
			res++;
		}
		forward+=rest;
	}
	return res;  // return your result
	}
};
