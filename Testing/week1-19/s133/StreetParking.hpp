#include <string>
using namespace std;
int XX_MARKER_XX;


class StreetParking
{
public:
	int freeParks(string street){
		int available = 0;
		int len =  street.length();
		if(street=="-"){
			return 1;
		}
		else{
			for (int i = 1; i < len-2; i++){
				if( (street[i] == '-') && (street[i+1] != 'B') && (street[i+2] != 'B') && (street[i+1] != 'S') && (street[i-1] != 'S') ){
					available++;
				}
			}
			if ( (len >= 3 ) && (street[0] == '-') && (street[1] != 'B') && (street[2] != 'B') && (street[1] != 'S') ){
				available++;
			}
			if ( (len >= 3 ) && (street[len-2] == '-') && (street[len-1] != 'B') && (street[len-1] != 'S') && (street[len-3] != 'S') ){
				available++;
			}
			if ( (len >= 2 ) && (street[len-1] == '-') && (street[len-2] != 'S') ){
				available++;
			}
			return available;
		}
		
	}
};