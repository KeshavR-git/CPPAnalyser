#include <iostream>
using namespace std;
int XX_MARKER_XX;


class StreetParking
{
	public:
	int freeParks(string street)
	{
		int res, streetLen;
		res = 0;
		streetLen = street.size();

		for (int i = 0; i < streetLen; i++) {
			if (street[i] != '-') {
				// do nothing
			} else if (street[i] == 'B' || street[i+1] == 'B' || street[i+2] == 'B') {
				// do nothing
			} else if (street[i] == 'S' || street[i+1] == 'S' || street[i-1] == 'S') {
				// do nothing
			} else {
				res++;
			}
		}

		return res;
	}
};