#include <stdlib.h>
#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

class ThrowTheBall
{
	public:
	int timesThrown(int N, int M, int L)
	{
		int throwCount = 0;
		vector<int> received(N, 0);

		received[0] = 1; // player has received the ball once
		int currentHolder = 0;

		// printf("N %d M %d L %d size %d\n", N, M, L, received.size());

		// first player 1 has the ball
		// ends when player gets ball M times
		while(received[currentHolder] < M){
			
			// cout << "current holder " << currentHolder << "{" << received[currentHolder] << "} ";

			// if odd go right
			if(received[currentHolder] % 2 == 1){

				currentHolder = (currentHolder - L);
				currentHolder = ((currentHolder % N) + N) % N;
				// cout << " [odd] passed to right, to* " << currentHolder << "|";
			}
			
			// if even go left
			else if(received[currentHolder] % 2 == 0){

				currentHolder = (currentHolder + L) % N;
				// cout << " [even] passed to left, to* " << currentHolder << "|";
			}
			
			received[currentHolder]++;
			// cout << " passed to " << currentHolder;
			throwCount++;
			// cout << " , times passed is now " << throwCount << endl;
		}

		return throwCount;
	}
};