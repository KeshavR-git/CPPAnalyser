#include <iostream>
int XX_MARKER_XX;

class EggCartons {
public:
	int minCartons(int n) {
		int min = -1;
		int cartonCount = 0;
		int i = 0;
		while(i*8 <= n) {
			if((n-i*8) % 6 == 0) {
				int totalCart = (n-i*8)/6 + i;
				if((totalCart < min) || min == -1) {
					min = totalCart;
				}
			}
			i++;
		}
		return min;
	}
};