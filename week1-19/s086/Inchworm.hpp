#include <iostream>
using namespace std;


class Inchworm{
public:
	int lunchtime(int branch, int rest, int leaf)
	{
		bool treeBranch[branch+1];
		int eaten=0;
		for(int i=0; i<branch+1; i++)
		{
			if(i%leaf==0 || i==0)
			{
				treeBranch[i]=1;
			}
			else
			{
				treeBranch[i]=0;
			}
		}
		for(int i=0; i<branch+1;i+=rest)
		{
			if(treeBranch[i]==1)
			{
				eaten++;
			}	
		}
		return eaten;
	}
};
