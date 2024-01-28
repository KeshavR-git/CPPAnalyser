#include <vector>
using namespace std;

class Inchworm
{
public:
	int lunchtime(int branch, int rest, int leaf)
	{
		int res=0;
		vector <int> branch_vec;

		for(int i=0;i<branch+1; i++)
		{	
			if(i%leaf==0)
			{
				branch_vec.push_back(1);
			}
			
			else 
			{
				branch_vec.push_back(0);
			}
		}

		for(int j=0;j<branch+1;j=j+rest)
		{
			if(branch_vec.at(j)==1)
			{
				res++;
			}
		}
		return res;
	}
	
};