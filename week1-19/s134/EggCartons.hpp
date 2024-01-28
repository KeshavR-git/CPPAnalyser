#include <algorithm>
using namespace std;
#ifndef EGGCARTONS_HPP
#define EGGCARTONS_HPP


class EggCartons{
public:
	int minCartons(int n) {
		if((n%2==1)||n<6){
			return -1;
		}
		else if((n==6)||(n==8)){
			return 1;
		}
		else {
			int a=minCartons(n-6);
			int b=minCartons(n-8);
			if((a!=-1)&&(b!=-1)){
				return min(a,b)+1;
			}
			else if((a==-1)&&(b!=-1)){
				return b+1;
			}
			else if((a!=-1)&&(b==-1)){
				return a+1;
			}
			else {
				return -1;
			}
		}	
	}
};
#endif