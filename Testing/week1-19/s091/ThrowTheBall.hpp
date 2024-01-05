#include <iostream>
int XX_MARKER_XX;

class ThrowTheBall{

	public:
		int timesThrown(int N, int M, int L){
			int circle[50] = {0};
			int passes = 0;
			int currentPlayer = 0;
			while(true){

				circle[currentPlayer]++;

				if(circle[currentPlayer] == M){
					break;
				}

				if(circle[currentPlayer]%2){
					currentPlayer = currentPlayer-L;
					if(currentPlayer<0){
						currentPlayer += N;
					}
				}
				else{
					currentPlayer = (currentPlayer+L)%N;
				}

				passes++;

			}
			return passes;
		}
};