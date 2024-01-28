#include <iostream>
using namespace std;

class ThrowTheBall {
public:
	int timesThrown(int N, int M, int L){
		// N players, M when game over, L moves left or right

		// setting up an array that has the amount of times each player (p) has had the ball.
		int p[N];
		for (int i = 0; i < N; i++){
			p[i] = 0;
		}

		int ball = 0; // locating which player has the ball.
		int counter = 0; // the tally for how long the ball's been passed around.
		while (p[ball] < M-1) {
			counter++;
			p[ball]++;
			if(p[ball] % 2 == 1) {
			// going left
				if(L <= ball){	// inside the bounds of the array
					ball -= L; 
				} else {			// outside the bounds of the array
					ball += N - L; 
				}
			} else {
				// going right
				if(N > ball + L){	// inside the bounds of the array
					ball += L;
				} else {			// outside the bounds of the array
					ball += L - N;
				}
			}
		}
		return counter;
	}
};