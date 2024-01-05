#include <bits/stdc++.h>
using namespace std;
int XX_MARKER_XX;

class StreetParking
{
public:
	int freeParks(string street) {
		int counter =0; int length = street.length();
		for(int i =0;i<street.length();i++) {
			if(street[i]=='B'||street[i]=='D'||(i+1<length && street[i+1]=='B') 
				|| (i+2<length && street[i+2]=='B') || street[i]=='S' || (i+1<length && street[i+1]=='S') || (i-1>=0 && street[i-1]=='S'))
				continue;
			counter++;
		}
		return counter;
	}
};