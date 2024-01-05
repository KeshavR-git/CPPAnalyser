#include <iostream>
using namespace std;
int XX_MARKER_XX;

class EggCartons{

	public:
	int minCartons(int n){

		int cartons = n;

		int sixes = n/6;
		int eights = 0;

		//Testing starting with sixes now

		if(n%6==0){
			if(sixes<cartons){
				cartons = sixes;

			}
		}
		else{
			while(sixes>0){
				if(sixes*6+eights*8==n){
					if(sixes+eights<cartons){
						cartons = sixes+eights;
					}
				}
				sixes -= 1;
				eights += 1;
			}
		}

		eights = n/8; 
		//cout<<"eights is: "<<eights<<endl;
		sixes = 0;

		if(n%8==0){
			if(eights<cartons){
				cartons = eights;

			}
		}
		else{
			while(eights>0){
				sixes += 1;
				cout<<eights<<"*8 + "<<sixes<<"*6 = "<<sixes*6+eights*8<<endl;
				if(sixes*6+eights*8==n){
					if(sixes+eights<cartons){
						cartons = sixes+eights;
					}
				}
				eights -= 1;
			}
		}

	if(cartons==n){
		return -1;
	}

	return cartons;

	}

};