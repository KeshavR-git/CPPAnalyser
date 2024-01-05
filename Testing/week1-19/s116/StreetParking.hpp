#include <iostream>
using namespace std;
int XX_MARKER_XX;


class StreetParking{
public:
	//default constructor
	StreetParking(){}
	//method which returns the number of spots to park at along the street
	int freeParks(string street){
		totalPark = 0;
		for(int i = 0; i <= street.length(); i++){
			//finding possible spots to park (- spaces)
			if(street[i] == '-'){
				if(street[i-1] != 'S' && street[i+1] != 'S' && street[i+1] != 'B' && street[i+2] != 'B'){
					totalPark++;
				}
			}
		}
		return(totalPark);
	}


protected:


private:
	//stores total number of parks
	int totalPark;

};
