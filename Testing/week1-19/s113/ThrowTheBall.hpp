#include<vector>
int XX_MARKER_XX;

class ThrowTheBall{
public:
	int timesThrown(int N, int M, int L){
		std::vector<int> counts(N,0);

		int playerWithTheBall = 0;
		int numThrows = 0;

		bool gameEnd = false;

		while(!gameEnd){
			counts[playerWithTheBall]++;
			if(counts[playerWithTheBall]==M){
				gameEnd = true;
			} else {
				numThrows++;
				if(counts[playerWithTheBall]%2 == 0){
					//even player
					playerWithTheBall += L;
					if(playerWithTheBall >= N){
						playerWithTheBall -= N;
					}
				} else {
					//odd player
					playerWithTheBall -= L;
					if(playerWithTheBall < 0){
						playerWithTheBall += N;
					}
				}
			}
		}

		return numThrows;
	}
};