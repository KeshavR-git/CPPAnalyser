#include <iostream>
using namespace std;
 
 
class ThrowTheBall
{
  public:
  	int timesThrown(int N, int M, int L)
  	{
  		if (M == 1)
  		{
  			return 0;
  		}

  		int count=0;
  		int pos=0;
   		int countdown=0;
  		int b=0;
  		int* array = new int[N];
  		int c,sop;
  		
  		for (int i = 0; i < N; ++i)
  		{
  			array[i] = 0;
   		}
  		
      //while no one has reached the limit the balls are thrown around
  		while	(b < M)
  		{

   			array[pos]++;
   			countdown = L;
  			c = array[pos]%2;
  			
   			if (array[pos] > b)
  			{
  				b = array[pos];
   			}

  			
  			while	(countdown > 0)
  			{
  				  				
   				if (c == 0)
  				{
  					pos++;
  					countdown--;
  					if (pos >= N)
  					{
  						pos = 0;
  					}
  					
  				}
  				if (c == 1)
  				{
   					pos--;
  					countdown--;

   					if (pos < 0)
  					{
   						pos = (N-1);
  					}
  					
  					
  				}
  			}
  			//counts the number of times the ball is thrown
  		}
  		for (int i = 0; i < N; ++i)
  		{
  			count = count + array[i];
  		}
  		return count-1;
  	}
 };