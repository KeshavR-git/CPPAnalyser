#include <iostream>
#include <string>
using namespace std;


class StreetParking{

	public:

		int freeParks(string street){

		int pp = 0;

		for (int i = 0; i < street.length(); i++){
			
			if(street[i] == '-'){
				
				if(street[i-1] == 'S'){

					pp = pp;
					
				}else if(street[i+1] == 'B'){

					pp = pp;
					
				}else if(street[i+1] == 'S'){

					pp = pp;
					
				}else if(street[i+2] == 'B'){

					pp = pp;
					
				}else{

					pp++;

				}
			}
		}

		return pp;

	}

};