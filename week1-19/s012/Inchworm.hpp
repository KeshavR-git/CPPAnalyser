#include <iostream>
using namespace std;


class Inchworm
{
	public:
	int lunchtime(int branch, int rest, int leaf)
	{
		int res = 0;
		for (int i = 0; i <= branch; i += rest) {
			// cout << "rest at: " << i << endl;
			if (i % leaf == 0) {
				// cout << "eating at " << i << endl; 
				res++;
			}
		}

		return res;
	}
};