using namespace std;
#include <iostream>
#include <vector>
int XX_MARKER_XX;

class EggCartons { 
public:
	// const int six_pack = 6;
	// const int eight_pack = 8;

	int minCartons(int n){
		// base cases (if odd or lower than 6)
		if(n % 2 == 1 || n < 6){
			// No solution
			return -1;
		} else if(n==6 || n == 8){
			// Only 1 solution
			return 1;
		} else {
			int six_count = minCartons(n-6);
			int eight_count = minCartons(n-8);

			// Checking final conditions for both counts
			if(six_count != -1 && eight_count != -1){
				// return the minimum of both solutions
				return min(six_count, eight_count) + 1;
			} else if(six_count == -1 && eight_count != -1){
				// Only the eight_count solution is possible
				return eight_count + 1;
			} else if(six_count !=-1 && eight_count == -1){
				// only the six_count solution is possible.
				return six_count + 1;
			} else {
				return -1;
			}
		}

	}
};
