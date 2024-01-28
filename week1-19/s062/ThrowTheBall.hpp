#include <iostream>
using namespace std;


class ThrowTheBall
{
	public:

		int timesThrown(int N, int M, int L){

			int friends[N];

			//initialise to 0
			for(int i=0; i<N; i++){
				friends[i] = 0;
			}

			//friends[0] = 1;

			int numThrows = 0;

			bool gameOver = false;
			int iterator = 0;

			while(!gameOver) {
				
				friends[iterator]++;

				if(friends[iterator]>=M){
					gameOver = true;
					break;
				} else if(friends[iterator]%2 == 0) {
					
					iterator += L;

					//loop the iterator back to the start
					if(iterator > (N-1)){
						iterator = iterator-(N);
					}



				} else if(friends[iterator]%2 != 0){


					iterator -= L;
					if(iterator < 0){
						iterator = (N)+iterator;
					}
				}
				
				numThrows++;
			}

			return numThrows;

		}
};