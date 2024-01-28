#include <iostream>

class ThrowTheBall {
public:
	int timesThrown(int N, int M, int L) {
		//Making the array circle
		int* circle = new int[N];

		//Setting the current ball holder
		int current = 0;
		int passCounter = 0;

		while(true) {
			//current player get's a pass
			circle[current]++;

			//Checks if current player has gotten to M
			if(circle[current] >= M) {
				return passCounter;
			}

			//Checks how many passes current player has and tests odd even.
			//Will pass left or right depending on how odd or even.
			int passPos = 0;
			if(circle[current] % 2 == 0) {
				//If even pass lefts
				passPos = current + L;
				//Makes the passing circular since the array is linear.
				if(passPos >= N) {
					passPos = passPos - N;
				}
			} else {
				//If odd pass right
				passPos = current - L;
				//Makes the passing circular since the array is linear.
				if(passPos < 0) {
					passPos = N + passPos;
				}
			}
			//counts how many total passes.
			passCounter++;

			//passPos is new current
			current = passPos;
		}
	}
};
