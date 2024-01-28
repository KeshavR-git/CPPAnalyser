#include <vector>

class ThrowTheBall
{
public:
	int timesThrown(int N, int M, int L)
	{
		std::vector<int> players;
		players.resize(N);

		for(int i=0; i<N; i++)
		{
			players[i] = 0;
		}

		int i = 0;
		int count = -1;

		while(players.at(i)<M)
		{
			count++;

			if(players.at(i)%2==0)
			{
				i-=L;

				if(i<0)
				{
					i+=N;
				}
			}
			else
			{
				i+=L;

				if(i>=N)
				{
					i-=N;
				}
			}
			players[i]++;
		}
		return count;
	}
};