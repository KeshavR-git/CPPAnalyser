#include <string>
#include <algorithm>
int XX_MARKER_XX;

class EggCartons
{
public:
	int minCartons(int n)
	{

		if (n==6 || n==8)
		{
			return 1;
		}
		else if (n<6 || n%2 == 1)
		{
			return -1;
		}
		else
		{
			int Count1 = minCartons(n-6);
			int Count2 = minCartons(n-8);

			if (Count1 != -1 && Count2 != -1)
			{
				return (std::min(Count1,Count2) +1);
			}
			else if (Count1 != -1 && Count2 == -1)
			{
				return Count1 +1;
			}
			else if (Count2 != -1 && Count1 == -1)
			{
				return Count2 +1;
			}
			else
			{
				return -1;
			}
		}
	}
};