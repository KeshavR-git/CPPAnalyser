#include <iostream>
using namespace std;


class StreetParking{
public:
	int freeParks(string street){
		int parks = 0;
		for(int i = 0;i<street.length();i++ ){
			if(street[i]=='-'){
				if(i>0 && i < street.length()-1){
					if(street[i+1]!='B' && street[i+2]!='B' && street[i+1]!='S' && street[i-1]!='S'){
						parks++;
					}
				} else if(i==0 && street[i+1]!='B' && street[i+2]!='B' && street[i+1]!='S'){
					parks++;
				} else if(i>=street.length()-2 && street[i-1]!='S' && street[i+1]!='B'){
					parks++;
				}
			}
		}
		return parks;	
	}
};