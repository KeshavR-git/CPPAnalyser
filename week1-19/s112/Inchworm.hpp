#include <iostream>
using namespace std;

class Inchworm
{
	public:
	int lunchtime(int branch, int rest, int leaf)
	{
		int NumberEaten = 1;
		int i;
		for ((i = rest); i <= branch; (i = i + rest))
		{
			if ((i % leaf) == 0)
			{
				NumberEaten++;
			}
		}
		return NumberEaten;
	}
};