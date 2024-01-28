#include <iostream>
#include <vector>
using namespace std;

class ThrowTheBall
{
	public:
		int timesThrown(int N, int M, int L){
			int numberofThrow = 0;
			int current=0;
			// The number of balls that player received
			// Vector is initialised as 0s.
			vector<int> p(N);
			p.at(current)++;
			while(p.at(current) < M){
				numberofThrow++;
				// If the number of balls that player received is even number
				if(p.at(current)%2==0)
					// Pass to left side
					current=(current+L)%N;
				// If the number of balls that player received is odd number
				else
					// Pass to right side
					current=((current-L)%N+N)%N;
				p.at(current)++;
			}
			return numberofThrow;
	}
};