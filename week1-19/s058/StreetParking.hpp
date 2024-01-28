#include <iostream>
#include <string>
using namespace std;


class StreetParking{
public:

	int freeParks(string street){
		int length = street.length();
		int res = 0;
		for(int i = 0; i<length; i++){
			//SET THE CONDITION OF THAT ALL
			if (street[i] == '-'){
				if(i<1){
					if(street[i+1] !='S' && street[i+1] != 'B' && street[i+2] != 'B'){
						res++;
					}
				} else {
					if(street[i+1] !='S' && street[i+1] != 'B' && street[i+2] != 'B' && street[i-1] != 'S'){
						res++;
					}
				}
			}
		}
		return res;
	}
};
