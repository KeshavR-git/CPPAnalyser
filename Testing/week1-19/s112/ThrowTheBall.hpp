#include <iostream>
using namespace std;
int XX_MARKER_XX;

class ThrowTheBall
{
	public:
	int timesThrown(int N, int M, int L)
	{
		//edge case check
		if (M == 1)
		{
			return 0;
		}
		int NumPasses = 1;
		//give the ball to the second person, assume the first has already passed the ball
		for (int i = (L % N); i != 0; i = ((i + L) % N))
		{
			NumPasses++;
		}
		return NumPasses*(M-1);
	}
};