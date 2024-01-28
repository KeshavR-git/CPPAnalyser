#include <iostream>
using namespace std;


class Inchworm
{
	public:
		int lunchtime(int branch, int rest, int leaf) {

			int currentPlace = 0;
			int total = 0;

			for (int i = 0; i < branch/rest; i++) {

				currentPlace += rest;

				if (currentPlace % leaf == 0)
					total++;
			}

			return total + 1;
		}
};