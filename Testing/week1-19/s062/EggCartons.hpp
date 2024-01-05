#include <iostream>
int XX_MARKER_XX;

class EggCartons
{
	public:

		int minCartons(int n){
			
			int cartons = 0;

			if(n < 6){
				return -1;
			}

			while(n>0){

				if(n%8 == 0){
					cartons += n/8;
					n = 0;
				} else {
					n -= 6;
					cartons++;
				}

			}

			if(n<0){
				return-1;
			} else {
				return cartons;
			}


			return 1;
		}
};