#include <iostream>
#ifndef ThrowTheBall_hpp
#define ThrowTheBall_hpp

class ThrowTheBall{
	
	public:
		int timesThrown(int N, int M, int L){
			int numPasses = 0;
			int i = 2;
			int multiple = N;
			if (N%L == 0){
				numPasses = (N/L)*(M-1);
			} else {
				while (multiple%L != 0){
					multiple = N*i;
					i++;
				}
				numPasses = (multiple/L)*(M-1);
			}
			return numPasses;
		}
};
#endif