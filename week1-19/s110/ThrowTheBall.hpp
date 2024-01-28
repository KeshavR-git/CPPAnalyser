#include <iostream>
using namespace std;
#ifndef THROWTHEBALL_H
#define THROWTHEBALL_H


class ThrowTheBall{
public:
	int timesThrown(int N, int M, int L){
		


		// intially the group of friends has held the ball 0 times except
		// the 1st one
		int friends[N];
		for(int i = 0; i<N; i++){
			friends[i]=0;
		}

		friends[0] = 1;
		int ballHolder = 0;
		int p = friends[ballHolder];
		int timesPassed = 0;
		int passLeft = (L % N);
		int passRight = N - passLeft;

		while(p < M){
			//passing if p is left
			if(p % 2 == 0){
				int pass = (passLeft+ballHolder) % N;
				friends[pass]++;
				timesPassed++;
				//cout << "ligma" << timesPassed << endl;
				//cout << "left" << pass << endl;
				ballHolder = pass;
				p = friends[pass];

			//passing if p is right
			} else {
				int pass = (passRight+ballHolder) % N;
				friends[pass]++;
				timesPassed++;
				//cout << "danke" << timesPassed << endl;
				//cout << "right" << pass << endl;
				ballHolder = pass;
				p = friends[pass];
			}	
		}

		return timesPassed;;
	}
};

#endif