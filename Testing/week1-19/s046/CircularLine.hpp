#include <iostream>
#include <vector> 
 using namespace std;
int XX_MARKER_XX;
 
class CircularLine
{
  public:
  	int longestTravel(vector<int> t)
	{
		int a;
		int total=0;
		int b;
		int c=0;

		for (int i = 0; i < t.size(); ++i)
		{
			total = total+t[i];
		}
		//to test the all possible routes
		if (t.size()==3)
		{
			a = t[1];
			b = t[0] + t[2];
			if (a<=b)
			{
				c=a;
			}
			else if (b>=a)
			{
				c=b;
			}
		}

		for (int i = 0; i < t.size(); ++i)
		{
			
			a = t[i];

			for (int j = (i+1); j < t.size(); ++j)
			{
				a=a+t[j];
				b=total-a;
				
					if (a<=b && a>c)
					{
						c=a;
					}
					else if (b<=a && b>c)
					{
						c=b;
					}

			}

		}
		return c;

	}
};