#include <iostream>
using namespace std;
int XX_MARKER_XX;

class ThrowTheBall{
public:
	//default constructor
	ThrowTheBall(){}
	//method to return how many times the ball was passed in the game
	int timesThrown(int N, int M, int L){
	//setting the array to 0
	for(int j = 0; j <= 50; j++){
		playerArray[j] = 0;
	}
	//setting variables to initial values
	totalPassed = 0;
	i = 0;
	playerArray[0] = 1;

	//checks whether game ends instantly
	if(playerArray[0] == M){
		return(totalPassed);
	}

	//keeps track of which player the ball is currently on
	while(playerArray[i] < M){
		//checks whether the ball is passed right or left
		if(playerArray[i] % 2 == 0){
			i = i + L;

			//keeps i focused on the correct player
			if(i > N-1){
				i = i - N;
			}

			//adds one to how many times the player has receieved 
			playerArray[i] = playerArray[i] + 1;

			//adds one to how many times the ball has been thrown
			totalPassed = totalPassed + 1;

			//checks whether game should end
			if(playerArray[i] == M){
				return(totalPassed);
			}

		//pass to the right
		}else{
			i = i - L;
			//keeps i focused on the correct player
			if(i < 0){
				i = i + N;
			}

			//adds one to how many times the player has receieved 
			playerArray[i] = playerArray[i] + 1;

			//adds one to how many times the ball has been thrown
			totalPassed = totalPassed + 1;

			//checks whether game should end
			if(playerArray[i] == M){
				return(totalPassed);
			}
		}

	}
return(-1);
}

protected:


private:
	//integers used to represent number of playersr, max number of receives and number of players to skip when passing, respectively
	int N, M, L;

	int totalPassed;
	int i;

	int playerArray[50];
};


