#include <iostream>
int XX_MARKER_XX;

class ThrowTheBall{

public:	

	int timesThrown(int N, int M, int L){rounds = N;
	//iterates through multiples of N until it finds a factor of L
	while(rounds % L != 0){

		rounds = rounds + N;

	}

	//returns number of passes
	return ((rounds/L)*(M-1));
};

private:
	int rounds;

};
