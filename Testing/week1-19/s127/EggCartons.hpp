#include <iostream>
using namespace std;
int XX_MARKER_XX;

class EggCartons
{
public:
	int minCartons(int n)
	{
		int eggsLeft = n;
		int cartons = 0;
		if ((n < 1) || (n > 100))
		{
			return -1;
		}
		if (n%2 != 0)
		{
			return -1;
		}
		if (n%8 == 0)
		{
			return n/8;
		}
		while(eggsLeft >= 8)
		{
			eggsLeft = eggsLeft-8;
			cartons++;
		}
		if (eggsLeft%6 != 0)
		{
			while(eggsLeft < n)
			{
				if (eggsLeft%6 == 0)
				{
					return (cartons + eggsLeft/6);
				}
				eggsLeft += 8;
				cartons--;
			}
		}
		else if(eggsLeft%6 == 0)
		{
			cartons++; //If remainder is 6
			return cartons; 
		}
		if (n%6 == 0)
		{
			return n/6;
		}
		else
		{
			return -1;
		}

		return cartons;
	}
	
};