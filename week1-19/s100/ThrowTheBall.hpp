#include <vector>
#include <iostream>
using namespace std;


class ThrowTheBall
{
public:
	int timesThrown(int N, int M, int L)
	{
		vector<int> Pass;
		
		int index = 1;
		int countofPasses=0;
		Pass.push_back(1);

		for(int i=1;i<N;i++)
		{
			Pass.push_back(0);
		}
		int *Ball = &Pass[0];

		while(*Ball != M)
		{

			if(*(Ball) %2 != 0)
			{
				index = (((index) - L)%N+N)%N;
				if(index==0)
				{
					index =  N;
				}
				Ball = &Pass[index-1];
				Pass[index-1] = Pass[index-1]+1;
			}

			else
			{
				index = (((index) + L)%N+N)%N;

				if(index==0)
				{
					index = N;
				}
				Ball = &Pass[index-1];
				Pass[index-1] = Pass[index-1]+1;				//cout << "gets to here4" << endl;
			}

		countofPasses++;
		}

		return countofPasses;

	}
};