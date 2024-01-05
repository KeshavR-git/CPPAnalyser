#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;


class EggCartons{
public:
	int minCartons(int n)
	{
//all available quantities must have either 6 or 8 as a factor
		if((n%6!=0 && n%8!=0) && n%8%6!=0 && n&6%8!=0)
		{
			return -1;
		}
		else
		{
			int r8=n%8;
			if(r8==0)
			{
				return n/8;
			}
			else if(r8%6==0)
			{
				return n/8 + r8/6;
			}

		}
	}
};

