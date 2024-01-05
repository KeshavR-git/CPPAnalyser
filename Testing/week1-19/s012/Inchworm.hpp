#include <iostream>
using namespace std;
int XX_MARKER_XX;


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