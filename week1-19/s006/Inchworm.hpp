#include <iostream>


class Inchworm
{
public:
	
	float lunchtime(int branch, int rest, int leaf) {

		int eat =  1;

		for(int i=1; i<=branch; i++) {

			if((i % leaf == 0) && (i % rest == 0)) {

				eat++;
			}
		}

		return eat;
	}
};