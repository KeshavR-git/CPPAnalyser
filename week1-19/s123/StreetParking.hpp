#include <iostream>
#include <string>
using namespace std;

class StreetParking
{
public:
	int freeParks(string street)
	{
		int counter = street.size();
		for (int i=0; i<street.size(); i++) {			//loop through the street and remove any space cannot be parked
			if (street[i] == 'D') {				//if driveway, remove that
				counter--;
			} else if (street[i] == 'S') {			//side street
				counter--;
				if (i > 0 && street[i-1] == '-') {		//check if there is a street behind
					counter--;
					street[i-1] = 'o';			//after it's counted, replace it with a generic character
				}
				if (i<street.size()-1 && street[i+1] == '-') {		//check if there is a street after
					counter--;
					street[i+1] = 'o';	
				}

			} else if (street[i] == 'B') {
				counter--;
				if (i > 0 && street[i-1] == '-') {		//check if there is a street behind of bus stop
					counter--;
					street[i-1] = 'o';	
				}
				if (i > 1 && street[i-2] == '-') {		//check if there is a street 2 blocks behind the bus stop
					counter--;
					street[i-2] = 'o';	
				}

			}
		}
		return counter;
	};

};