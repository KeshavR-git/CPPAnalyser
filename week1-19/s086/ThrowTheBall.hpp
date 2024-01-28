#include <iostream>
using namespace std;


class ThrowTheBall{
public:
	int timesThrown(int N, int M, int L)
	{
		int count=0;
		int place=1;
		int pc[N];

		for(int i=0;i<N;i++)
		{
			pc[i]=0;
		}
		pc[0]=1;

		while(true)
		{

			if(pc[place]%2==0)//even to the left
			{
				count++;
				place=place-L;
				while(place<0)
				{
					place=place+N;
				}
				pc[place]++;
			}
			else //odd to the right
			{
				count++;
				place=place+L;
				while(place>=N)
				{
					place=place-N;
				}
				pc[place]++;
			}
			if(pc[place]>=M)
			{
				if(L%2==0)
				{
					count++;
				}
				else
				{
					count--;
				}
				return count;
			}
		}
	}
};
