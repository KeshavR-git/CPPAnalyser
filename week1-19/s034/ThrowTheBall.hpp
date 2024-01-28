#include <iostream>
#include <algorithm>
using namespace std;

class ThrowTheBall
{
public:
	int timesThrown(int n,int m,int l)
	{
		int lcm=n*l/__gcd(n,l);
		int pass=lcm/l;
		int rest=pass*(m-1);
		return rest;
	}
};
