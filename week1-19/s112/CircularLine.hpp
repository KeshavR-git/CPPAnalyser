#include <iostream>
#include <vector>
#include <string>
using namespace std;

class CircularLine
{
	public:
	int longestTravel(vector<int> t)
	{
		//find the length of the input
		int Length = t.size();
		int LocalTotal = 0;
		int MaxTotal = 0;
		//sum of the total distance
		int Total = 0;
		for (int i = 0; i < Length; i++)
		{
			Total = Total + t[i];
		}
		//brute force
		for (int i = 0; i < Length; i++)
		{
			for (int j = 0; j < Length; j++)
			{
				//check the two path lengths
				//if i and j and the same, ignore
				LocalTotal = 0;
				if (i == j)
				{
					break;
				}
				//if i is larger than j
				if (i > j)
				{
					for (int k = j; k < i; k++)
					{
						LocalTotal = LocalTotal + t[k];
					}
					//pick the smallest
					if (Total-LocalTotal < LocalTotal)
					{
						LocalTotal = (Total-LocalTotal);
					}
					//check if better than before
					if (LocalTotal > MaxTotal)
					{
						MaxTotal = LocalTotal;
					}
				}
				//if j is larger than i
				if (j > i)
				{
					for (int k = i; k < j; k++)
					{
						LocalTotal = LocalTotal + t[k];
					}
					//pick the smallest
					if (Total-LocalTotal < LocalTotal)
					{
						LocalTotal = (Total-LocalTotal);
					}
					//check if better than before
					if (LocalTotal > MaxTotal)
					{
						MaxTotal = LocalTotal;
					}
				}
			}
		}
		return MaxTotal;
	}
};