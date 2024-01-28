#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

class StreetParking
{
	public:
	int freeParks(string street)
	{
		bool canPark;
		int parkingCount = 0;

		for (int i = 0; i < street.length(); i++){

			canPark = true;

			if(street[i] == 'D'||street[i] == 'B'||
				street[i+1] == 'B'||street[i+2] == 'B'||
				street[i] == 'S'||street[i+1] == 'S'){

				canPark = false;
			}

			if(i-1 > -1){

				if(street[i-1] == 'S'){

					canPark = false;
				}
			}

			if (canPark){

				parkingCount++;
			}
		}

		return parkingCount;
	}
};