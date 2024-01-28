#include <iostream>
using namespace std;


class EggCartons
{
public:
	int minCartons(int n)
	{
		int counter1 = 0;
		int counter2 = 0;
		if(n%2==1 || n<6)
		{
			return -1;
		}
		else if(n==6 || n==8)
		{
			return 1;
		}
		else
		{
			int C1 = minCartons(n-6);
			int C2 = minCartons(n-8);

			if(C1 != -1 && C2 != -1)
			{
				return min(C1,C2)+1;
			}

			else if(C1!=-1 && C2==-1)
			{
				return C1+1;
			}

			else if(C2!=-1 && C1 == -1)
			{
				return C2+1;
			}
			else
			{
				return -1;
			}
		}
	}
};