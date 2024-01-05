#include <iostream>
using namespace std;
int XX_MARKER_XX;
 
// Lowest common multiple function

class EggCartons
{
	public:
	int minCartons(int n){
		int a,b;
		switch(n%8){
			case 0:
				a=0;
				b=n/8;
			break;
			case 6:
				a=1;
				b=n/8;

			break;
			case 4:
				a=2;
				b=n/8-1;
			break;
			case 2:
				a=3;
				b=n/8-2;
			break;
			default:
				return -1;
			break;
		}

		if (a>=0 && b>=0)
			return a+b;
		else
			return -1;
	}
};

