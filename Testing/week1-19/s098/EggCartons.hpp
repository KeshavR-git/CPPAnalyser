#include <iostream>
using namespace std;
int XX_MARKER_XX;

class EggCartons{

	public:
	int minCartons( int n ){

		int cartons1 = 0, cartons2 = 0;
		int n1 = n, n2 = n;

		if( n1%8 == 0 )
			return n1/8;

		while( n1%6 != 0 ){

			n1 = n1 - 8;
			cartons1++;

			if( n1 < 0 )
				return -1;
		}

		cartons1 = cartons1 + n1/6;

		while( n2%8 != 0 ){

			n2 = n2 - 6;
			cartons2++;

			if( n2 < 0 )
				return -1;
		}

		cartons2 = cartons2 + n2/8;

		if( cartons1 < cartons2 )
			return cartons1;
	
		return cartons2;

	}
};
