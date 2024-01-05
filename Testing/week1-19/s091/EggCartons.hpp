#include <climits>
#include <iostream>
int XX_MARKER_XX;

class EggCartons{

	public:
		int minCartons(int n){

			int cartons1 = INT_MAX;
			int cartons2 = 0;

			if(n<6 || n%2==1){
				return -1;
			}
			else{

				int modSix = n%6;
				int modEight = n%8;

				if(modSix==0 && modEight==0){
					if(n/6 < n/8){
						cartons1 =  n/6;
					}
					else{
						cartons1 = n/8;
					}
				}
				else if(modSix==0){
					cartons1 = n/6;
				}
				else if(modEight==0){
					cartons1 = n/8;
				}
					
				int currentN = n;
				bool done = false;
				while(currentN>0){
					currentN -= 6;
					cartons2++;

					if(currentN%8==0){
						cartons2 += currentN/8;
						done = true;
						break;
					}
				}

				if(done){
					if(cartons2 < cartons1){
						return cartons2;
					}
					else{
						return cartons1;	
					}
					
				}
				else{
					if(cartons1 != INT_MAX){
						return cartons1;
					}
					else{
						return -1;	
					}					
				}									
			}
		}
};