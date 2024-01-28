using namespace std;

class Inchworm
{
public:
	int lunchtime(int branch, int rest, int leaf)
	{
		int gcd, lcm;
		for (int i = 1; i <= rest && i <= leaf; ++i)
		{
			if (rest % i == 0 && leaf % i == 0)
			{
				gcd = i;
			}
		}
		lcm = rest * leaf / gcd;
		return branch / lcm + 1;
	};
};