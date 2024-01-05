#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int XX_MARKER_XX;


class StreetParking {
public:
	int freeParks(string street) {
		int res = 0;
		for (int i = 0; i < street.size(); i ++) {
			if (street[i] == 'B' || street[i] == 'D' || street[i] == 'S') continue;
			if (i + 2 < street.size() && street[i + 2] == 'B') continue;
			if (i + 1 < street.size() && street[i + 1] == 'B') continue;
			if (i + 1 < street.size() && street[i + 1] == 'S') continue;
			if (i - 1 >= 0 && street[i - 1] == 'S') continue;
			res++;
		}
		return res;
	}
};