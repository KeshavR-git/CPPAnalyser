#include <iostream>
#include <string>
using namespace std;
class StreetParking{
public:
	int freeParks(string street){
		int count=0;
		for(int i=0;i<street.length();i++){
			if(street[i]=='-'){
				count=count+1;
			}
		}
		for(int i=0;i<street.length();i++){
			if(street[i]=='-'){
				if(street[i+1]=='B'||street[i+2]=='B'){
					count=count-1;
				}
				else if(street[i+1]=='S'||street[i-1]=='S'){
					count=count-1;
				}
			}
		}
		return count;
	}
};
