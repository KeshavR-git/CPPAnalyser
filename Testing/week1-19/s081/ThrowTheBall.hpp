#include <vector>
using namespace std;
int XX_MARKER_XX;
class ThrowTheBall
{
	public:
	int timesThrown(int N, int M, int L) {
		vector<int> players(N,0);
		int i = 0, count = 0;
		while (1) {
			players[i]++;
			if (players[i] == M)
				break;
			count++;
			if (players[i] % 2 == 0) {
				i -= L;
				i += N;
				i %= N;
			} else {
				i += L;
				i %= N;
			}
		}
		return count;
	}
};