#include <iostream>
using namespace std;
#ifndef THROWTHEBALL_HPP
#define THROWTHEBALL_HPP

 
 
class ThrowTheBall {
public:
	int timesThrown(int N, int M, int L){
		int* p = new int[N];
		int i = 0;
		p[0] = 1;

		while(p[i]!=M){
			if(p[i]%2==0){
				i=i-L;
				if(i<0){
					i=i+N;
				}
			}else {
				i=i+L;
				if(i>(N-1)){
					i=i-N;
				}
			}
			p[i]++;
		}
		int res=-1;
		for(int j = 0;j < N;j++){
			res+=p[j];
		}
		
		
		return res;  // return your result
	}
};

#endif