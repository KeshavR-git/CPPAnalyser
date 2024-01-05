#include <iostream>
using namespace std;
int XX_MARKER_XX;
class EggCartons {
	public:
	int minCartons(int n) {
		int min = 0;
		int min6 = 0;
		int min8 = 0;
		//checks fot the bases cases
		if(n < 6 || n%2==1){
			return -1;
		} else if(n==6 || n==8) {
			return 1;
		}
		min6 = (minCartons(n-6)+1);
		min8 = (minCartons(n-8)+1);
		//checks if the output was negative and returns the right
		//minimum value
		if (min6 < 1 && min8 < 1){
			return -1;
		} else if (min6 <1 && min8 > 0){
			return min8;
		} else if (min6 > 0 && min8 < 1){
			return min6;
		}

		//checks what minimum value is the lowest and chooses that one
		if(min6 <= min8){
			return min6;
		}else {
			return min8;
		}
	}
};
