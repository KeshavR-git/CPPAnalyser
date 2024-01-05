using namespace std;
#include <string>
int XX_MARKER_XX;
class StreetParking {
public:
	int freeParks(std::string street){
		bool loopControl = true;
		int i = 0;
		while(loopControl == true){

			if(street[i] == 'D'){
				street.erase(i+1,i+1);
				i=0;
			}

			if(street.size() == 1){
				if(street[i] == 'B' || street[i] == 'S'){
					return 0;
				} else {
					return 1;
				}
			}

			if(i = 1 && street.size() == 2){
				if(street[i] == 'B' || street[i] == 'S'){
					return 0;
				}
			} else if(i = 0 && street.size() == 2){
				if(street[i] == 'S'){
					return 0;
				} else if (street[i] == 'B'){
					street.erase(i+1,i+1);
					i=0;
				}
			}

			if(street[i] == 'B'){
				street.erase(i-2,i+1);
				i=0;
			}


			if(street.size() - i == 1 && street[i] == 'S'){
				street.erase(i,i+1);
				i=0;
			}

			if(street[i] == 'S'){
				street.erase(i,i+2);
				i=0;
			}

			if (i = 0 )
			i++;
			if(i>=street.size()){
				return street.size();
				loopControl = false;
			}
		}
	}
};
