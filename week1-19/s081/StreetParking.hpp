#include <string>
using namespace std;

class StreetParking
{
	public:
	int freeParks(string street) {
		string copy = street;
		for (int i = 0; i < street.length(); i++)
			copy[i] = '-';
		for (int i = 0; i < street.length(); i++) {
			if (street[i] == 'D')
				copy[i] = 'X';
			else if (street[i] == 'B') {
				copy[i] = 'X';
				if (i-1 >= 0)
					copy[i-1] = 'X';
				if (i-2 >= 0)
					copy[i-2] = 'X';
			} else if (street[i] == 'S') {
				copy[i] = 'X';
				if (i-1 >= 0)
					copy[i-1] = 'X';
				if (i+1 < street.length())
					copy[i+1] = 'X';
			}
		}
		int count = 0;
		for (int i = 0; i < copy.length(); i++)
			if (copy[i] == '-')
				count++;
		return count;
	}
};