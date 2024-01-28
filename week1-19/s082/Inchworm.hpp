#include <iostream>
using namespace std;


class Inchworm
{
public:
	int lunchtime(int branch, int rest, int leaf);
};

int Inchworm::lunchtime(int branch, int rest, int leaf) {
	int ate_count = 0;

	for (int i = 0; i <= branch; i += rest) {
		if (i % leaf == 0) {
			ate_count++;
		}
	}

	return ate_count;
}