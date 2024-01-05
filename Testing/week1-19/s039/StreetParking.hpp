#include <iostream>
#include <string>
int XX_MARKER_XX;

class StreetParking {
public:
	int freeParks(std::string street) {
		int counter = 0;
		for(int i=0; i<street.size(); i++) {
			//Skips parking spot if it's not a dash.
			if(!(street[i] == '-')) {
				continue;
			}

			//Skips parking spot if there's a Bus in the next two parking spots.
			//(First checks array bounds)
			
			//Checks 2 spaces up.
			if(!(i+2 >= street.size())) {
				if(street[i+2] == 'B') {
					continue;
				}
			}
			//Checks 1 space up.
			if(!(i+1 >= street.size())) {
				if(street[i+1] == 'B') {
					continue;
				}
			}

			//Skips parking spot if there's a Street before.
			if(!(i-1 < 0)) {
				if(street[i-1] == 'S') {
					continue;
				}
			}

			//Skips parking spot if there's a street after.
			if(!(i+1 >= street.size())) {
				if(street[i+1] == 'S') {
					continue;
				}
			}

			//If it's a good parking spot count it.
			counter++;
		}
		return counter;
	}
};