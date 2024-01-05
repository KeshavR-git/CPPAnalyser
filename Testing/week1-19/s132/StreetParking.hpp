#include<string>
#include<iostream>
#include<ctype.h>
using namespace std;
int XX_MARKER_XX;

class StreetParking{
public:
	int freeParks(string street){
		for(int i=0;i<street.size();i++){
			if(street[i]=='B' &&street[i-1]=='-' && street[i-2]=='-'){
				street.erase(i-2,2);
				}
			if(street[i]=='B'&&street[i-1]=='-' && street[i-2]!='-'){
					street.erase(i-1,1);
				}
			if(street[i]=='B' && street[i-2]=='-' && street[i-1]!='-'){
					street.erase(i-2,1);
				}
			if(street[i]=='S' && street[i-1]=='-'){
				street.erase(i-1,1);
				}
			if (street[i]=='-' && street[i-1]=='S'){
				street.erase(i,1);
				}
			}
		int t=0;
		for (int i = 0; i < street.size(); i++){
			if (street[i]=='-'){
				t++;
			}
		}
		return t;
	}
};