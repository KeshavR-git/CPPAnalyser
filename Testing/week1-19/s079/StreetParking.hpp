#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;
#ifndef STREETPARKING_HPP
#define STREETPARKING_HPP


 
class StreetParking {
public:
	int freeParks(string street){
		int streetLength = street.length();
		int res=0;
		
		for(int i = 0;i < streetLength;i++){
			switch(street[i]) {
				case 'B':
				if(i>=1){
					street[i-1] = 'x';
				}
				if(i>=2){
					street[i-2] = 'x';
				}
				break;
				case 'S':
				if(i>=1){
					street[i-1] = 'x';
				}
				if(i<streetLength-1){
					street[i+1] = 'x';
				}
				break;
			}
		}
		for(int i = 0;i < streetLength;i++){
			if(street[i]=='-'){
				res++;
			}
		}
		return res;  // return your result
	}
};

#endif