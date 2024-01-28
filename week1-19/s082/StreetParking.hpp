using namespace std;
#include <string>

class StreetParking {
public:
	int freeParks(string street);
};


int StreetParking::freeParks(string street) {
	int space = 0;
	for(int i = 0; i <= street.length(); i++){
		if (street[i] == '-'){
			space ++;
		}
		if ((street[i] == '-' && street[i-1] == 'S' && street[i+1] == 'S') || (street[i] == '-' && street[i+1] == 'S' && street[i+2] == 'B') || (street[i] == '-' && street[i+1] == 'B' && street[i+2] == 'B')){
			space ++; // -S-S, -BB, -SB
		}
		if (street[i] == '-' && street[i+1] == 'S' && street[i+2] == '-' && street[i+3] == 'B' && street[i+4] == 'B'){ 
			space --; // -S-BB
		}
		
		else if (street[i] == 'S'){
			if (street[i-1] == '-'){
				space --;
			}
			if (street[i+1] == '-'){
				space --;
			}
		}
		
		else if (street[i] == 'B'){
			if (street[i-1] == '-' && street[i-2] != 'S'){
				space --;
			}
			if (street[i-2] == '-' && street[i-3] != 'S'){
				space --;
			}
		}

	}
	

	return space;
}