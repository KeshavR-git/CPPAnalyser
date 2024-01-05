#include <algorithm>
#include <iostream>
using namespace std;
int XX_MARKER_XX;


class ThrowTheBall
{
public:
	int timesThrown(int N, int M, int L)
	{
		int lcm=N*L/__gcd(N,L);
		int cycle=lcm/L;
		int res=(M-1)*cycle;
		return res;
	}
};
