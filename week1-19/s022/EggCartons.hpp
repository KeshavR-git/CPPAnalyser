#include <iostream>
#include <cmath>
using namespace std;

class EggCartons
{
public:
	EggCartons(){}
	int minCartons(int n)
	{
		if(n%2!=0)return -1;
		if(n<12&&n!=6&&n!=8) return -1;
		double min = n;
		double minn = min/8;
		return ceil(minn);
	}
};