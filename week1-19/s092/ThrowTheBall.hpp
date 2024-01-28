#include <iostream>
using namespace std;


class ThrowTheBall{
public:
	int timesThrown(int N, int M, int L){
		int p=0;
		int *arr = new int[N];
		int current=0;

		while(true){
			arr[current]++;
			cout << current << endl;
			if(arr[current]==M){
				return p;
			}

			if(arr[current]%2==0){
				//Even == left == moving up (adding)
				current+=L;
				if(current >= N){
					current=current-N;
				}			
			}else{
				//Odd == right == moving down (minus)
				current-=L;
				if(current < 0){
					current= N+current;
				}			
			}
			p++;
		}
	}
};
