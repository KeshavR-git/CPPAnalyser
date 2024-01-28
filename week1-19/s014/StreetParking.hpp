#include<string> 
using namespace std;


class StreetParking{
	public:
	int freeParks(string street){
		int count =0;

		for(int i=0; i<street.size(); i++){
			if(street[i] != 'D' && street[i] != 'B' && street[i] != 'S'){
				if(street[i+2] != 'B' && street[i+1] != 'B' && street[i+1] != 'S' && street[i-1] != 'S'){
					count ++;
				}
			}
		}
		return count;
	}
};