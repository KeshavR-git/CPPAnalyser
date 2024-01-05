using namespace std;
#include <iostream>
#include <vector>
int XX_MARKER_XX;

class ThrowTheBall {
private:

public:
		int timesThrown(int N, int M, int L){
			vector<int> player;
			for(int i = 0; i < N; i++){

				player.push_back(0);
				//std::cout << "Player " << i << " created. Receives: " << player[i] << std::endl;
			}
			int play = true;
			int pos = 0;
			int times = 0;

			while(play == true){
				player[pos] += 1;
				if(player[pos] == M){
					//cout << "Count reached: " << player[pos] << endl;
					play = false;
					break;
				} 
				// if(player[pos] != M) {
				// 	player[pos] += 1;
				// }

				if(player[pos] % 2 == 0){
					// Is Even
					//cout << pos << " = Even, count = " << player[pos] << ", adding L" << endl;

					pos += L;
					if(pos >= N){
						pos = pos - N;
					}
				} else {
					// Is Odd
					//cout << pos << " = Odd, count = " << player[pos] << ", subtracting L" << endl;
					pos -= L;
					if(pos < 0){
						pos = pos + N;
					}
				}
				times++;
			}
			// clear array

			return times;
			// printPlayers(N);
		}
		// int printPlayers(int N){
		// 	for(int i = 0; i < N; i++){
		// 		std::cout << "Final: " << player[i] << std::endl;
		// 	}
		// }
};