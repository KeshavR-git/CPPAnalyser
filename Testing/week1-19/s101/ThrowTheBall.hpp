#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;
int XX_MARKER_XX;

class ThrowTheBall
{
public:
	int timesThrown(int N, int M, int L) {

		vector<int> circle(N, 0);
		int count = 0;
		int curr = 0;
		bool odd;

		circle.at(curr) ++;

		while (true) {

			if (circle.at(curr) == M) return count;

			odd = circle.at(curr)%2;

			if (odd) {
				curr = (curr + L%N)%N;
			} else {
				curr = (curr + (circle.size() - L%N))%N;
			}

			circle.at(curr) ++;
			count++;
		}		
	}
	
};