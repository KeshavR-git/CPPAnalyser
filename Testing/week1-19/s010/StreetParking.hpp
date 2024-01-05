#include <string>
using namespace std;
int XX_MARKER_XX;


class StreetParking {
public:

	int freeParks(string street) {
		int n = street.length();	// number of units the street has
		int count = 0;				// no. of eligible spaces
		
		for(int i = 0; i < n; i++) {
			int h = i - 1;
			int j = i + 1;
			int k = i + 2;
			
			// If stop is directly in front of a private driveway, bus stop, or side-street...
			if( (street[i] == 'D') || (street[i] == 'B') || (street[i] == 'S' ) ) {
				// do nothing
			}
			
			// If stop is 5m before a bus stop or side-street...
			else if( ( j <= n ) && ( (street[j] == 'B') || (street[j] == 'S' ) ) ) {
				// do nothing
			}
			
			// If stop is 10m before a bus stop...
			else if( ( k <= n ) && ( street[k] == 'B' ) ) {
				// do nothing
			}
			
			// If stop is 5m after a side-street...
			else if( ( h >= 0 ) && ( street[h] == 'S' ) ) {
				// do nothing
			}
			
			// if passed all conditions, it is eligible
			else {
				count++;
			}
		}
		
		return count;
	}
};