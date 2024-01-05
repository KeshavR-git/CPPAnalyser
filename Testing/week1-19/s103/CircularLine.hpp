#include <iostream>
#include <algorithm>
#include <vector>
int XX_MARKER_XX;

 
 
class CircularLine
{
  public:
  	int distance(int i, int x, std::vector<int> t, int len)
{
	int value = 0;

	for (int y = i; y != x; y++)
	{
		if (y == len)
		{
			y = -1;
			value = value + t[len];
			//std::cout << "when y==len. value: " << value << std::endl;
		}
		else
		{
			value = value + t[y];
			//std::cout << "when its not. Value: " << value << std::endl;
		}
	}

	return value;
}


  	int longestTravel(std::vector<int> t)
{
	int len = t.size();
	int max = 0;
	int curr1 = 0;
	int curr2 = 0;

	for (int i = 0; i < len; i++)
	{
		for (int x = i; x < len; x++)
		{
			if (x != i)
			{
				curr1 = distance(i, x, t, len - 1);
				curr2 = distance(x, i, t, len - 1);
				int best = std::min(curr1, curr2);

				//std::cout << "i=" << i << ", x=" << x << " || Curr1: " << curr1 << ", Curr2: " << curr2 << " || Best: " << best << std::endl;

				max = std::max(max, best);
				//std::cout << "The Answer: " << max << std::endl;
			}
		}
	}

	return max;
}
  
};