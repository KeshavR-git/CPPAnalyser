#include<iostream>
#include<vector>
using namespace std;

class ThrowTheBall{
public:
	int timesThrown(int N, int M, int L){
		std::vector<int> v(N);
		int pivot=0;
		int time=0;
		v[pivot]=1;
		while(v[pivot]<M){
			if (v[pivot]%2!=0){
				if (pivot+N-L<N){
					pivot=N+pivot-L;
				}
				else{
					pivot=pivot-L;
				}
			}
			else if(v[pivot]%2==0){
				if(pivot+L<N){
					pivot=pivot+L;
				}
				else{
					pivot=pivot+L-N;
				}
			}
			time++;
			v[pivot]++;
		}
		return time;
	}
};

