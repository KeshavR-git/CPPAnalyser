#include <iostream>
using namespace std;

class EggCartons
{
public:
	int minCartons(int n)
	{
		for(int i = 0; i<17; i++)
		{
			for(int j = 0; j<13; j++)
			{
				if (n == i*6 + j*8)
				{
					return i+j;
				}
			}
		}
		return -1;
	}
};
