#include <iostream>
using namespace std;
int XX_MARKER_XX;


class EggCartons
{
public:

	int minCartons(int n) {

		int carton = 0;

		while(n >= 0 && (n % 8) !=0) {

			carton++;

			n -= 6;
		}

		if(n >= 0 && (n%8) == 0) {

			carton += n/8;

			return carton;
		}

		else {

			return -1;
		}
	} 

	//update
};