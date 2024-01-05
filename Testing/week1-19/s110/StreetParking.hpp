#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;
#ifndef STREETPARKING_H
#define STREETPARKING_H


class StreetParking{
public:
	int freeParks(string street){
		int streetLength = street.length();
		int freePos = 0;

		for(int i = 0; i<streetLength; i++){
			//covers constraint 1, 2, 5
			if(street[i] == 'D' || street[i] == 'B' || street[i] == 'S'){
				//go to next position in street if position is any of
				//the above characters
			} else {
				bool availability = true;
				bool constraint3Check = true;
				bool constraint4Check = true;
				bool constraint6Check = true;
				bool constraint7Check = true;
				if(i == 0){
					constraint6Check = false;
				} else if(i >= streetLength-2){
					constraint4Check = false;
				} else if(i >= streetLength-1){
					constraint3Check = false;
					constraint4Check = false;
					constraint7Check = false;
				}
				//constraint 3;
				if(street[i+1] == 'B' && constraint3Check == true){
					availability = false;
				}
				//constraint 4;
				if(street[i+2] == 'B' && constraint4Check == true){
					availability = false;
				}
				//constraint 6;
				if(street[i-1] == 'S' && constraint6Check == true){
					availability = false;
				}
				//constraint 7;
				if(street[i+1] == 'S' && constraint7Check == true){
					availability = false;
				}

				if(availability == true){
					freePos++;
				}
			}
		}

		return freePos;
	}

};

#endif