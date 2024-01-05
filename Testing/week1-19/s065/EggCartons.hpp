using namespace std;
int XX_MARKER_XX;

class EggCartons
{
public:
	int minCartons(int n)
	{
		if (n % 2 != 0)
		{
			return -1;
		}
		else if (n < 6)
		{
			return -1;
		}
		if (n == 10)
		{
			return -1;
		}
		int six;
		int eight;
		int temp = n / 8;
		int r = n - temp * 8;
		if (r != 0)
		{
			six = (6 - r) / 2 + 1;
			eight = temp - (6 - r) / 2;
		}
		else 
		{
			eight = temp;
			six = 0;
		}
		return six + eight;
	};
};