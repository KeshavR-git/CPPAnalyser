#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;
 
class StreetParking
{
public:
	int freeParks(string street){
		int count=0;
		//int sum=0;
		for(int i=0; i < street.length();i++){
			if(street[i] == 'B' || street[i] == 'D' || street[i] == 'S'){
				continue;
			}
			if( ( (street[i+1] == 'B' )|| street[i+1] == 'S')){// && i < street.length()-2 
				continue;
			}
			if( street[i+2] == 'B' ){//&& i < street.length()-3 
				continue;
			}
			if(street[i-1] == 'S' && i > 0 ){
				continue;
			}
			//if(street[i])
			else{
				count++;
				cout << i << endl;
			}
		}
		return count;
	}
};



