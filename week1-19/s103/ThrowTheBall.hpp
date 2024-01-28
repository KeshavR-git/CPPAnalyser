#include <iostream>

class ThrowTheBall
{
  public:
  int timesThrown(int N, int M, int L)
  {
       int ballNow = 0;
		int res = 0;

		int *player = new int[N];
		for (int i = 0; i < N; i++)
		{
			player[i] = 0;
		}

		player[0] = 1;

		while (player[ballNow] < M)
		{
			res++;
			if (player[ballNow] % 2 == 0)
			{
				ballNow = ballNow + L;
				if (ballNow > N - 1)
				{
					ballNow = ballNow % N;
				}
			}
			else
			{
				ballNow = ballNow - L;
				if (ballNow < 0)
				{
					ballNow = ballNow + N;
				}
			}



			player[ballNow] ++;
			if (player[ballNow] >= M)
			{
				break;
			}
		}
		return res;
  }
};