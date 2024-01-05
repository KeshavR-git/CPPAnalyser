#include <vector>
using namespace std;
int XX_MARKER_XX;

class ThrowTheBall
{
public:
	int timesThrown(int N, int M, int L)
	{
		if ( (N < 3) || (N > 50))
		{
			return -1;
		}
		if ( (M < 1) || (M > 50))
		{
			return -1;
		}
		if ( (L < 1) || (L > (N-1)))
		{
			return -1;
		}
		int counter = 0;
		int max = 0;
		int currentPlayer = 1;
		vector<int> players(N);

		while(max < M)
		{
			players.at(currentPlayer -1) += 1; //Increment value of vector
			if ( players.at(currentPlayer -1) > max )
			{
				max = players.at(currentPlayer -1);
			}
			if ( (players.at(currentPlayer -1) - 1) %2 == 0 )
			{
				currentPlayer -= L;
			}
			else if ( (players.at(currentPlayer -1) - 1) != 0 )
			{
				currentPlayer += L;
			}
			if (currentPlayer < 1)
			{
				currentPlayer += N; //Prevent out of bounds
			}
			else if (currentPlayer > N)
			{
				currentPlayer -= N; //Prevent out of bounds
			}
			if (max < M)
			{
				counter++;
			}
	}


	return counter;
}
	
};
