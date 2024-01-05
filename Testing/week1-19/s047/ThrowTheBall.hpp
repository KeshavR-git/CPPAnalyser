#include "math.h"
using namespace std;
int XX_MARKER_XX;

class ThrowTheBall
{
public:

	int timesThrown(int N, int M, int L)
	{
		int players[N];

		for (int k = 0; k < N; ++k)
		{
			players[k] = 0;
		}

		int i = 0; //index of players array
		int count = 0;

		while(true)
		{
			players[i]++;

			if (players[i] >= M) //end game
			{
				return count;
			}
			else if ( (players[i] % 2 ) == 0) //p is even, move left p times
			{
				i += L;
			}
			else //p is odd, move right p times
			{
				i -= L;
			}

			if (i >= N) //keeping index in bounds
			{
				i -= N;
			}
			else if (i < 0)
			{
				i += N;
			}

			count++;
		}
	}

};