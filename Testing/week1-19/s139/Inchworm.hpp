#include <cstdlib>
#include <iostream>
using namespace std;
int XX_MARKER_XX;

class Inchworm
{
public:
	int lunchtime(int branch, int rest, int leaf)
	{
		int res=0;
		for(int i=0; i<=branch; i=i+leaf){
			if(i%rest==0){
				res++;
			}
		}
		return res;
	}
};

