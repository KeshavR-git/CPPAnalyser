#include <string>

class StreetParking {
public:
	int freeParks(std::string);
};

int StreetParking::freeParks(std::string street){
	int parks = 0;
	bool prevSide = false;
	for(int i=0;i<street.length();i++){
		if(street[i]=='-' && !prevSide){
			int add = 1;
			if(i<street.length()-2){
				if(street[i+2]=='B'){
					add=0;
				}
			}
			if(i<street.length()-1){
				if(street[i+1]=='B' || street[i+1]=='S'){
					add=0;
				}
			}
			parks+=add;
		}
		prevSide=false;
		if(street[i]=='S'){
			prevSide = true;
		}
	}
	return parks;
}
