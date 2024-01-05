#include <string>
#include <iostream>
int XX_MARKER_XX;

class StreetParking
{
public:
	int freeParks(std::string street){
		int size = street.size();
		for (int i=0; i<size;i++){
			if(street[i]=='B'){
				for (int k=0; k<3; k++){
					if ((i-k)<0){
						break;
					}
					street[i-k]=0;
				}
			}else if (street[i]=='S'){
				street[i]=0;
				if ((i-1)>=0){
					street[i-1]=0;
				}
				if (((i+1)<size)&&(street[i+1]=='-')){
					street[i+1]=0;
				}
			}else if (street[i]=='D'){
				street[i]=0;
			}
		}
		int count=0;
		for (int i=0; i<street.size();i++){
			if (street[i]!=0){
				count++;
				std::cout << i << " ";
			}
		}
		return count;
	}
};