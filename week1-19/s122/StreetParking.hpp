#include <string>
#include <iostream>
#include <vector>
using namespace std;

class StreetParking{
	public:
		int freeParks(string street){
			int parkings = 0;
			
			for(int i = 0; i < street.length(); i++){
				cout << "iteration " << i << endl;
				bool front = false;
				bool back = false;
				if (street[i] == '-'){
					if (i<street.length()-1){
						if (street[i+1]!= 'B' && street[i+1]!= 'S'){
							if (i<street.length()-2){
								if (street[i+2]!= 'B'){
									
									front = true;
								}
							}
							else{
								front = true;
							}
						}
					}
					if (i>0){
						if(street[i-1]!= 'S'){
							
							back = true;
						}
					}
					else{
						back = true;
					}
				}
				
				if (back && front){
					//cout << "is good" << endl;
					parkings++;
				}
				else if(front && i==0){
					//cout << "is good" << endl;
					parkings++;
				}
				else if(back && i==street.length()-1){
					//cout << "is good" << endl;
					parkings++;
				}
			}
			return parkings;
		}
};