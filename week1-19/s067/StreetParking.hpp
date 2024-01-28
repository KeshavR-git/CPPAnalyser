#include <iostream>
#include <string>
using namespace std;
#pragma once



class StreetParking{

public:

	int freeParks(string street){

		int full = 0;
		for(int i = 0; i < street.length(); i++){
			
			if(street[i] == 'D'){
				street[i] = '@';

			}
			
			if(street[i] == 'B'){
				street[i] = '@';
				street[i-1] = '@';
				street[i-2] = '@';

			}
			
			if(street[i] == 'S'){
				street[i] = '@';
				street[i-1] = '@';
				street[i+1] = '@';

			}

		}

		for(int i = 0; i < street.length(); i++){
			if(street[i] == '@'){
				full++;
			}
		}
		
		return street.length() - full;
	}
};