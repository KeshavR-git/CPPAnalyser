#include <vector>
#include <iostream>
using namespace std;
 
 
class ThrowTheBall
{
  public:
  int timesThrown(int N, int M, int L) {
		
		int pass=0;
		int a = 0;
		vector<int> array;

		for(int i=0; i<N; ++i)
			array.push_back(0);
		
		while(true){
			++array[a];
			if(array[a]>=M)
				return pass;
			pass = pass + 1;
			if(array[a]%2==0){
				a = (a-L);
				if(a<0)
				 a = a+N;
			}
			else
				a = (a+L)%N;
		}
	}
};