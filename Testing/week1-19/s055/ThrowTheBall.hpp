#include <iostream>
using namespace std;
int XX_MARKER_XX;

class ThrowTheBall{
public:
	int timesThrown(int N,int M,int L){
		int friends[N-1];
		int passtime=0;
		for(int i=0;i<N;i++){
			friends[i]=0;
		}
		int current=0;
		int flag=1;
		while(flag==1){
			if(friends[current]%2==0&&friends[current]!=(M-1)){
				friends[current]++;
				if(current-L<0){
				current=(current-L)+(N);}
				else{
					current-=L;
				}
				passtime++;
				
			}else if(friends[current]%2!=0&&friends[current]!=(M-1)){
				friends[current]++;
				if(current+L>(N-1)){
				current=(current+L)-(N);}
				else{
					current+=L;
				}
				passtime++;
			}else{
				flag=0;
			}
		}
		return passtime;
}
};
