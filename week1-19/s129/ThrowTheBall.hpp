#include <iostream>
using namespace std;
class ThrowTheBall{
public:
	int timesThrown(int N,int M,int L){
		int arr[50];
		int loc=1;
		int count=0;
		for(int i=0;i<N;i++){
			arr[i]=0;
			if(i==0){
				arr[i]+=1;
			}
		}
		while(1){
			if(arr[loc-1]==M){
				return count;
			}else{
				if(arr[loc-1]%2!=0){
					loc=loc-L;
					if(loc<0){
						loc=N-(-loc)%N;
						arr[loc-1]+=1;
						count=count+1;
					}else if(loc==0){
						loc=N;
						arr[loc-1]+=1;
						count=count+1;
					}else{
						arr[loc-1]+=1;
						count=count+1;
					}
				}else{
					loc=loc+L;
					if(loc>N){
						loc=loc%N;
						arr[loc-1]+=1;
						count=count+1;
					}else if(loc==0){
						loc=N;
						arr[loc-1]+=1;
						count=count+1;
					}else{
						arr[loc-1]+=1;
						count=count+1;
					}
				}
			}
		}
	}
};
