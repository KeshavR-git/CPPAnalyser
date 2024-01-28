#include <iostream>
using namespace std;


class EggCartons
{
    public:
    int minCartons(int n) {
        int res;

        res = -1;
        // 100 / 6 = 16.6 (round up to nearest 1)
        for(int i = 0; i < 17; i++) {
            // 100 / 8 = 12.5 (round up to nearest 1)
			for(int j = 0; j < 13; j++) {
				if (n == i*6 + j*8){
					return i + j;
				}
			}
		}
		return res;
    }
};