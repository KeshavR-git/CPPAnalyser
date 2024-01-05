#include <climits>
using namespace std;
int XX_MARKER_XX;

#define LITTLE_CARTONS 6
#define LARGE_CARTONS 8

class EggCartons {
public:
	int minCartons(int n);
};

int EggCartons::minCartons(int n) {
	int min = -1;
	if (n >= LITTLE_CARTONS && n <= LARGE_CARTONS) {
		if (n == LITTLE_CARTONS) {
			min = 1;
		}
		else if (n == LARGE_CARTONS) {
			min = 1;
		}
	}
	else if (n > LARGE_CARTONS) {
		int max = (n / LITTLE_CARTONS) + 1;
		int tmpMin = INT_MAX;
		for (int i = 0; i <= max; ++i) {
			for (int j = 0; j <= max; ++j) {
				if ((i * LARGE_CARTONS + j * LITTLE_CARTONS) == n) {
					// cout << "LARGE_CARTONS:" << i << ", LITTLE_CARTONS:" << j << ", TOTAL:" << i + j << endl;
					int total = i + j;
					if (total < tmpMin) {
						tmpMin = total;
					}
				}
			}
		}
		if (tmpMin != INT_MAX) {
			min = tmpMin;
		}
	}
	return min;
}
