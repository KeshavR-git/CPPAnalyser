#include <iostream>
#include <vector>
using namespace std;
int XX_MARKER_XX;


class ThrowTheBall
{
public:
	int timesThrown(int N, int M, int L)
	{
		int result = 0;
		vector<int> times;
		for(int i=0; i<N; i++){
			times.push_back(0);
		}

		int position = 0;
		times[position] = 1;

		while(times[position] < M){
			result++;
			
			if(times[position]%2 == 0){
				position = (position+L)%N;
			}
			else{
				position = ((position-L)%N+N) %N;
			}
			times[position]++;
		}
		return result;
	}
};