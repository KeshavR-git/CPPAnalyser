#include <iostream>
using namespace std;

class StreetParking
{
	public:
		int freeParks(string street){
			// Counter variable
			int parks = 0;
			int n = street.length();
			for(int i=0; i<n; i++){
				// - belongs to 5meters
				// Skip characters
				if(street[i] != '-')
					continue;
				// Not 5 meters before and after a  side-street
				else if(street[i+1]=='S' || street[i-1]=='S')
					continue;
				// Not 5 and 10 meters before a bus stop.
				else if(street[i+1]=='B' || street[i+2]=='B')
					continue;
				// Keep counting the numbers of available free parks
				parks++; 
			}
	        return parks;
		}
};