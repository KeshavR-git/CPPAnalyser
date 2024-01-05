#include <iostream>
using namespace std;
int XX_MARKER_XX;

class Inchworm
{
public:
	Inchworm(){}
	int lunchtime(int branch, int rest, int leaf)
	{
		int new_branch_len = branch - branch%leaf;
		int* new_branch = new int[new_branch_len];
		int inc=0;
		for(int i=0; i<new_branch_len+1; i++ )
		{
		    if(i%leaf==0) *(new_branch+i) = 1;
		    else *(new_branch+i) = 0;
		}
		for(int i=0; i<new_branch_len+1; i=i+rest) if(*(new_branch+i)==1) inc++;		
		return inc;
	}
};



/*int main()
{
	Inchworm worm = Inchworm();
	cout<<worm.lunchtime(1000,3,7); 
	return 0;
} */