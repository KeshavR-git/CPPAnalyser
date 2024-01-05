#include <iostream>
#include <algorithm>
using namespace std;
int XX_MARKER_XX;

class ThrowTheBall{
public:
	int timesThrown(int N, int M, int L){
		int res =((M-1)*N)/__gcd(N,L);
		return res;
	}
};
