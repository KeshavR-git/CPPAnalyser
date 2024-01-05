#include <iostream>
using namespace std;
int XX_MARKER_XX;

class EggCartons {
	public:
		int minCartons(int n) {
			int countMin = 0;
			while (n >= 0 && n%8 != 0){
				countMin++;
				n -= 6;
			}
			if (n >= 0){
				countMin = countMin + (n/8);
				return countMin;
			}
			else{
				return -1;
			}
		}
};