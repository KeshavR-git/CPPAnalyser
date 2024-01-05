#include <iostream>
using namespace std;
int XX_MARKER_XX;

class StreetParking{
public:
	int freeParks(string street){
		int length=street.length();
		int park_place=0;

		for(int i=0;i<length;i++){
				if(street[i]=='D'){
					park_place+=0;
					continue;
				}
				if(street[i]=='B'){
					park_place+=0;
					continue;
				}
				if(street[i+1]=='B'){
					park_place+=0;
					continue;
				}
				if(street[i+2]=='B'){
					park_place+=0;
					continue;
				}
				if(street[i]=='S'){
					park_place+=0;
					continue;
				}
				if(street[i+1]=='S'){
					park_place+=0;
					continue;
				}
				if(street[i-1]=='S'){
					park_place+=0;
					continue;
				}
				else{
					park_place++;
				}
		}
		return park_place;
	}
};