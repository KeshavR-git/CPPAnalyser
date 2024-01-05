#include <iostream>
using namespace std;
int XX_MARKER_XX;

class ThrowTheBall{
public:
	int timesThrown(int N, int M, int L){
		//main array and initialize to 0
		int touches[N+1];
		for (int i = 0; i < N+1; i++){
			touches[i] = 0;
		}

		int ball = 1;

		while (touches[ball] < M){
			touches[ball]++;
			
			if (touches[ball] == M){
				return touches[0];
			}
			else if (touches[ball]%2 == 0){
				ball = ball - L;
			}
			else{
				ball = ball + L;
			}

			if (ball < 1){
				ball = ball + N;
			}
			if (ball > N){
				ball = ball - N;
			}
			touches[0]++;
		}
	}
};