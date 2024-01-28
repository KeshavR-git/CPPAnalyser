#include <iostream>
#include <string>
#include <vector>
using namespace std;


class StreetParking
{
public:
	
	int freeParks(std::string street) {

		// int size = street.size()

		int size = street.length();

		int j=0;

		int count = 0;

		int total = 0;

		for(int i=0; i < size; i++) {

			if(street[i] == '-') {

				j++;
			}

			if(street[i] == 'B') {

				count = j-2;

				if(count >= 0) {

					total += count;

				}

				j=0;
			}

			if(street[i] == 'S') {

				count = j-1;

				if(count >= 0) {

					total += count;
				}

				j=0;
				i++;
			}

			if(street[i] == 'D') {

				j=0;
			}

			if(i == (size-1)) {

				if(street[i] == '-')

					total += j;
			}


		}


		return total;

	}
	
};