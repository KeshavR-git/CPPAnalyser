#include <iostream>
#include <string.h>
using namespace std;

class StreetParking{
	
	private:
		int i, amtparks;

	public:
		int freeParks(string street){
			i = 0;
			amtparks = 0;
			for (i=0;i<street.length();i++){
				if(street[i] == '-' && street[i-1] != 'S' && street[i+1] != 'S' && street[i+1] != 'B' && street[i+2] != 'B'){
					amtparks ++;
				}
			}
			return (amtparks);
		}
};