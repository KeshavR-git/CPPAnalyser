#include <iostream>
#include <math.h>
using namespace std;
int XX_MARKER_XX;


class EggCartons{

	public:

		int minCartons(int n){

			double dn = (double)n;

			double x = dn/8;

			if( n < 6 || n % 2 == 1 || n == 10 ){

				return -1;

			}else if( n == 6 || n == 8 ){

				return 1;

			}else if( n > 10 && n % 2 == 0 ){

				return ceil(x);

			}

		}

};