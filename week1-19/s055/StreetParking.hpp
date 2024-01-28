#include <iostream>
#include <string>
using namespace std;

class StreetParking{
public:
	int freeParks(string x){
		int count=0;
		int length=x.length();
		for(int i=0;i<length;i++){
			if(x[i]=='-'){
				if(x[i+1]!='B'||i==length-1){
					if(x[i+2]!='B'||i==length-2){
						if(x[i+1]!='S'||i==length-1){
							if(x[i-1]!='S'||i==0){
								count++;
							}
						}
					}
				}
			}
		}
	return count;
}
};
