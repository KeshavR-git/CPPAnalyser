#include <iostream>
#include <math.h>
#include <vector>
#include <string>
using namespace std;
int XX_MARKER_XX;


class EggCartons
{
public:
	int minCartons(int n)
	{
		//num is the number of cartons
		int num=0;
		//check for impossible cartons
		if((n%2==1) || (n<5))
		{
			return -1;
		}
		//find minimum numbers
		else
		{
			//numbers of 6 carton
			for(int i=0;i<17;i++)
			{
				//numbers of 8 carton
				for(int j=0;j<13;j++)
				{
					if(n%6==0 && n%8==0)
					{
						num=n/8;

					}
					if(6*i+8*j == n)
					{
						num=i+j;
						return num;
					}
					

				}
			}
		}


		return -1;

	}
};