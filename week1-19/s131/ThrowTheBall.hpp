#include <iostream>
#include <string>
#include <math.h>
using namespace std;


class ThrowTheBall
{
public:
	int timesThrown(int N,int M,int L)
	{
		int ball[N];
		int p=0;
		int Mtime=0;
		//create the empty array
		for(int i=0;i<N;i++)
		{
			ball[i]=0;
		}
		ball[0]=1;

		for(int j=0;Mtime<M;p++)
		{
			//check for even
			if(ball[j]%2==0)
			{
				//pass the ball to person L places to his left
				j=j-L;
				//situation where i-L is less than 0
				if(j<0)
				{
					j=j+N;
				}
			}
			else
			{	//check for odd
				//pass the ball to right if it is odd
				j=j+L;
				//situation where i+L is greater than N
				if(j>=N)
				{
					j=j-N;
				}
			}
            //pass ball
			ball[j]=ball[j]+1;
			Mtime=ball[j];

		}
		if(p==1)
		{
				p=0;
		}

        //return the pass time 
		return p;
	}
	
};