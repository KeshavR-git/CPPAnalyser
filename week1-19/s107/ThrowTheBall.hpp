#include<iostream>
using namespace std;

 
class ThrowTheBall
{
  public:
  int timesThrown(int N, int M, int L)
  {
  	int res;
  	res = (M-1) * N / gcd(N,L);
    return res;  
  }
  
  int gcd(int N, int L)
  {
  	while (L != 0)
  	{
  		int reminder = N % L;
  		N = L;
  		L = reminder;
  	}
  	return N;
  }
};