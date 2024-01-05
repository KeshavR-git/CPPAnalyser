#include <iostream>
#include <cmath>
using namespace std;
int XX_MARKER_XX;

class EggCartons
{
public:
	int minCartons(int n){
		if(n<6){
			return -1;
		}
		else if(n==6){
			return 1;
		}
		else if(n>6&&n<8){
			return -1;
		}
		else{
			int quotient=floor(n/8);
			float remainder=n/8;
			if(remainder==0){
				return floor(n/8);
			}
			else if(remainder>0){
				
				for(int i=quotient;i>=0;i--){
					for(int j=0;j<100;j++){
						if((8*i)+(6*j)==n){
							return i+j;
						}
					}
				}
			}
			return -1;
		}
	}	
};