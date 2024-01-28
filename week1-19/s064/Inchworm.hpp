#include <math.h>
using namespace std;


class Inchworm
{
public:

	int gcd(int rest, int leaf)
	{
		int temp_1 = max(rest,leaf);
		int temp_2 = min(rest,leaf);
		int temp_3 = rest * leaf;
		if(temp_1 % temp_2 == 0){
			return temp_2;
		}
		else{
			return gcd(temp_2, temp_1 % temp_2);
		}
	}

	int lcm(int rest,int leaf)
	{
		return rest * leaf / gcd(rest,leaf);
	}

	int lunchtime(int branch, int rest, int leaf)
	{
		int temp = branch / lcm(rest,leaf) + 1;
		return temp;
	}
	
};