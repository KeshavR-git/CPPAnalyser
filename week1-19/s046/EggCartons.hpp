#include <iostream>
 using namespace std;

 
class EggCartons
{
  public:
  	//takes an input and findes the minumum amount of egg cartons to get that number of eggs.
  	int minCartons(int n)
	{
		if (n%2==1 || n<6 || n==10)
		{
			return -1;
		}

		int num8=0;
		int num6=0;
		int size = (n/8+1);
		int tot=0;

		if (n%8==0)
		{
			return (n/8);
		}
		
		
		for (int i = 0; i < size; ++i)
		{
			if (((n-(i*8))%6) == 0) // findes the maximum number of 8 size egg cartons while still able to add 6 size egg cartons
			{

				num8 = i;
			}
		}
		num6 = (n-(num8*8))/6;
		
		tot = num6+num8;
		return tot;
	}
};
