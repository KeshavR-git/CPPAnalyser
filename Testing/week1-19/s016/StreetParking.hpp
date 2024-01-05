#include <iostream>
using namespace std;
int XX_MARKER_XX;


class StreetParking
{
	public:
		int freeParks(string street) {

			int total = 0;

			for (int i = 0; i < street.length(); i++) {

				bool parkFlag = true;

				// Check 1 space behind for Bus stop
				if (i >= 1) {

					if (street[i-1] == 'S')
						parkFlag = false;

				}

				// Check current space is clear
				if (street[i] != '-')
					parkFlag = false;


				// Check next spot onwards
				if (i < street.length() - 1) {

					if (street[i+1] == 'S' || street[i+1] == 'B')
						parkFlag = false;

				}

				if (i < street.length() - 2) {

					if (street[i+2] == 'B')
						parkFlag = false;

				}

				// If this spot is good to park, add 1 to total
				if (parkFlag)
					total++;


			}

			return total;

		}	


};