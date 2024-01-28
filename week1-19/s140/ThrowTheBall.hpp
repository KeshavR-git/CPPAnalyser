#include <iostream>
using namespace std;
 
class ThrowTheBall
{
	public:
	int timesThrown(int N, int M, int L){
	int i = 0;
    int res = 0;
	int arr[N];
	for(int i = 0; i < N; i++){
		arr[i] = 0;
	}
	while(N > 0){
		arr[i]++;
		if(arr[i] >= M){
			return res;
		}
		res++;
		if(arr[i] % 2 == 0){
			i = (i - L);
			if(i < 0){
				i = i + N;
			}
		}
		else{
			i = (i + L) % N;
		}
	}
	}
};
