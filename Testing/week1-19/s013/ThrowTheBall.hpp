#include <iostream>
int XX_MARKER_XX;

class ThrowTheBall
{
public:
	int timesThrown(int N, int M, int L) {
		int friends[N];
		for (int i = 0; i < N; ++i)
		{
			friends[i] = 0;
		}

		int count = 0;
		int current = 0;

		while(true) {
			friends[current] = friends[current] + 1;
			
			
			if (friends[current] >= M)
			{
				
				return count;
			} else {
				if (friends[current] % 2 == 0)
				{
					current = current + L;
				} else {
					current = current - L;
				}
				

				if (current < 0)
				{
					current = current * -1;
					current = N - current;
				} else if (current > N)
				{
					current = current - N;
				} if (current == N)
				{
					current = 0;
				}
				
				count = count + 1;
			}

		}
	} 
	
};