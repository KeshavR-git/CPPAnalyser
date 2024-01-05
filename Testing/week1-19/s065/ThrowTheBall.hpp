using namespace std;
int XX_MARKER_XX;

class ThrowTheBall
{
public:
	double timesThrown(int N, int M, int L)
	{
		int gcd;
		for (int i = 1; i <= N && i <= L; ++i)
		{
			if (N % i == 0 && L % i == 0)
			{
				gcd = i;
			}
		}
		return (M - 1) * (N / gcd);
	};
};