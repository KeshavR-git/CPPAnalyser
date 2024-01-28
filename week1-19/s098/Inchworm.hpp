#include <iostream>
#include <math.h>
using namespace std;


class Inchworm{

	public:
	int lunchtime( int branch, int rest, int leaf ){

		int eaten = 0;
		int numLeaves = floor( branch/leaf ) + 1;

		for( int i = 0; i < numLeaves; i++ ){

			if( ( i*leaf )%rest == 0 )
				eaten++;
		}

		return eaten;
	}
};
