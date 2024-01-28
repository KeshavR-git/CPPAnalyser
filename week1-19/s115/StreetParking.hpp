#include <iostream>
#include <string>
using namespace std;

class StreetParking {
public:
	int freeParks(string street){
		int pass = 0;
		for (int i = 0;i < street.length();i++){
             // if (street[i] == '-' && street[i+1] != 'D' && street[i+1] != 'B' && street[i+1] != 'S' && street[i+2] != 'B' && street[i+3] != 'B' && street[i+1] != 'S' && street[i-1] != 'S'){
             // 	pass++;
             // }
			if (street[i] == '-' &&  street[i+1] != 'B' && street[i+2] != 'B'  && street[i+1] != 'S' && street[i-1] != 'S'){
				pass++;
				cout << i << " ";
			}
		}
		cout << endl;
		return pass;
	}

};