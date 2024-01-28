#include <vector>
using namespace std;

class ThrowTheBall {
public:
	int timesThrown(int N, int M, int L) {
		int i = 0, numThrown = 0;
		vector<int> players(N, 0);
		players[i]++;
		while (players[i] < M) {
			players[i]++;

			numThrown++;
			// If even, pass L places to the left.
			if (players[i] % 2 == 0) {
				// Pass ball i - L iterations around circle.
				i = (i - L);
				// Ensure that i doesn't go negative.
				// Add N so that it stays within the circle.
				if (i < 0) {
					i += N;
				}
			} else {
				// Pass ball i + L iterations around circle.
				i = (i + L) % N;
			}
		}
		return numThrown;
	}
};