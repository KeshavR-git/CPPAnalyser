#include <vector>
using namespace std;
int XX_MARKER_XX;

class EggCartons {
public:
	int minCartons(int n) {
		int cartons = 0;

		// Two constraints.
		if (n % 2 != 0 || n < 6) {
			return -1;
		}

		for (unsigned int i = 0; i < n; i++) {
			for (unsigned int j = 0; j < n; j++) {
				if (n == (i*6) + (j*8)) {
					// Total cartons.
					return i+j;
				}
			}
		}
		// If nothing happens then return -1 anyway.
		return -1;
	}
};