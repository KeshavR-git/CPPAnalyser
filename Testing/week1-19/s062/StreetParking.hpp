#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;


class StreetParking
{
	public:

		int freeParks(string street){

			int parks = 0;

			for(int i=0; i<street.length(); i++){
				if(street[i] == '-'){

					//case where street length is just 1
					if(street.length() == 1){
						if(street[i] != '-'){
							return 0;
						}
					}

					if(i == 0){

						//dont check behind
						if(street[i+1] != 'S' && street[i+1] != 'B'){
							if(i >= street.length()-2){
								//if we're just one away from end, just add to parks
								parks++;
								street[i] = 'O';
							} else if(street[i+2] != 'B'){
								parks++;
								street[i] = 'O';
							}
						}
					} else if(i == street.length()-1) {

						//dont check ahead
						if(street[i-1] != 'S'){
							parks++;
							street[i] = 'O';
						}
					} else {
						//check ahead and behind
						if(street[i-1] != 'S'){
							
							if(street[i+1] != 'S' && street[i+1] != 'B'){
								if(i >= street.length()-2){
									//if we're just one away from end, just add to parks
									parks++;
									street[i] = 'O';
								} else if(street[i+2] != 'B'){
									parks++;
									street[i] = 'O';
								}
							}
						}
					}

				}

			}
			
			return parks;

		}
};