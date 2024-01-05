#include <vector>
int XX_MARKER_XX;

class ThrowTheBall {
public:
	int timesThrown(int N, int M, int L) {
		std::vector<int> players;

		for(int i = 0; i < N; i++) {
			players.push_back(0);
		}

		int pos = 0;
		int passes = 0;
		int temp;

		while(true) {
			players[pos]++;
			if(players[pos] == M) {
				break;
			}
			passes++;

			//Increment Vector Circle
			if(players[pos]%2 == 0) {
				temp = L;
				while(temp > 0) {
					if(pos-1 < 0) {
						pos = players.size()-1;
						temp--;
					}else {
						pos--;
						temp--;
					}
				}
			}else {
				temp = L;
				while(temp > 0) {
					if(pos+1 > int(players.size()-1)) {
						pos = 0;
						temp--;
					}else {
						pos++;
						temp--;
					}
				}
			}

		}
		return passes;
	}
};
