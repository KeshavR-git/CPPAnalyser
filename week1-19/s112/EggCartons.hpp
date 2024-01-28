#include <iostream>
#include <cmath>
using namespace std;

class EggCartons
{
	public:
	int minCartons(int n)
	{
		if ((n % 8) == 0)
		{
			return (n / 8);
		}
		if (((n % 8)  == 2) && (floor(n / 8) > 1))
		{
			return (floor(n / 8) + 1);
		}
		if (((n % 8) == 4) && (floor(n / 8) > 0))
		{
			return (floor(n / 8) + 1);
		}
		if (((n % 8) == 6))
		{
			return (floor(n / 8) + 1);
		}
		return -1;
	}
};