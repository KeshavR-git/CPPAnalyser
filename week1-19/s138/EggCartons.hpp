#include <iostream>
#include <cmath>
class EggCartons {
public:
	int minCartons(int n){
		if(n%2 == 1){
			return -1;
		}
		int m = 0;
		int p = floor(float(n)/8);
		while(p >= 0){
			m = n - 8*p;
			if(m%6 == 0){
				return p + m/6;
			}
			p--;
		}
	return -1;
	}
};