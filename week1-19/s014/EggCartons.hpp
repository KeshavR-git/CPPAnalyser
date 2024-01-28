#include <math.h>
using namespace std;

class EggCartons{
	public:
	int minCartons(int n){
		int x =0;
		int y =0;
		int min=0;

		if(n<6)
			return -1;

		for (int i=0; i<17; i++){
			for (int j=0; j<13; j++){
				if(6*i+8*j == n && ((i+j < min) || (min == 0))){
					min = i+j;
				}
			}
		}

		if(min == 0){
			return -1;
		}

		return min;
	}
};
