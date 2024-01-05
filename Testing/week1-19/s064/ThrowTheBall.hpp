#include <bits/stdc++.h>
using namespace std;
int XX_MARKER_XX;


class ThrowTheBall
{
public:
	int n = 0;
	int gcd(int rest, int leaf)
	{
		int temp_1 = max(rest, leaf);
		int temp_2 = min(rest, leaf);
		int temp_3 = rest * leaf;
		if (temp_1 % temp_2 == 0) {
			return temp_2;
		}
		else {
			return gcd(temp_2, temp_1 % temp_2);
		}
	}
	int timesThrown(int N, int M, int L) {
		return (M - 1)*(N / gcd(N, L));
	}

};

