#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
int XX_MARKER_XX;

class EggCartons 
{
public:
	int minCartons(int n) {
		if(n%2==1 || n<6)
			return -1;
		else if(n==6 || n==8)
			return 1;
		else {
			int carton1 = minCartons(n-6);
			int carton2 = minCartons(n-8);
			if (carton1 != -1 && carton2 != -1)
			{
				return min(carton1, carton2) + 1;
			}
			else if (carton1 == -1 && carton2 != -1)
			{
				return carton2 + 1;
			}
			else if (carton1 != -1 && carton2 == -1)
			{
				return carton1 + 1;
			}
			else
				return -1;
		}
	}
};