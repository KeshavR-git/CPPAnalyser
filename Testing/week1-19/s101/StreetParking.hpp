#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;

class StreetParking
{
public:
	int freeParks(string street) {

		char curr,fiveb,fivea,tenb;
		int free = 0;

		for (int i = 0; i < street.size(); i ++) {

			curr = street[i];
			if ((i+1) < street.size()) fiveb = street[i+1]; else fiveb = ' ';
			if ((i-1) >= 0) fivea = street[i-1]; else fivea = ' ';
			if ((i+2) < street.size()) tenb = street[i+2]; else tenb = ' ';

			if (curr == '-' && fiveb != 'B' && tenb != 'B' && fiveb != 'S' && fivea != 'S') free++;
		}

		return free;
	}
	
};