#include <vector>
#include <iostream>
using namespace std;

class ThrowTheBall {
public:
    int timesThrown(int N, int M, int L)
    {
    	//initially number of times held is 1 as ball then passed to player1
    	int counter = 0;
    	vector <int> playerCount;
    	playerCount.push_back(1);
    	
    	//ball handed to player 1
    	int index=1;
    	
    	for (int i = 1; i < N; ++i)
    	{
    		playerCount.push_back(0);
    	}

    	//pointer to 1st element of vector. (where the ball is currently)
		int *ballPtr = &playerCount[0];		 

		//while the number of times ball held > M
		//check if even or odd and move the ballPtr around and increase p accordingly
		while(*ballPtr != M)
		{
			if (*(ballPtr) %2 == 0)
			{
				index = ((index+L)%N +N)% N;

				if (index == 0)
				{
					index = N;
				}
				ballPtr = &playerCount[index-1];
				playerCount[index-1] = playerCount[index-1] + 1;
			}
			else
			{
				index = ((index-L)%N +N)% N;

				if (index == 0)
				{
					index = N;
				}
				ballPtr = &playerCount[index-1];
				playerCount[index-1] = playerCount[index-1] + 1;	
			}
			counter++;
    	}
    	return counter;
	}
};