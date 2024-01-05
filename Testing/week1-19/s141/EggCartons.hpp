#include <iostream>
using namespace std;
int XX_MARKER_XX;

class EggCartons{
public:
int minCartons(int n){
		int count_six_box=0;
		int count_eight_box=0;
		int count_total_box=0;

		if(n==6 || n==8){
			count_total_box=1;
			return count_total_box;
		}
		if(n<6 || n%2!=0){
			count_total_box=-1;
			return count_total_box;
		}
		if(n<18){
			if(n%6==0 && n%8!=0){
				count_total_box=n/6;
				return count_total_box;
			}
		}
		if(n%8==0 && n%6!=0){
			count_total_box=n/8;
			return count_total_box;
		}
		if(n%6==0 && n%8==0){
			if((n/8) > (n/6)){
				count_total_box=n/6;
				return count_total_box;

			}
			if((n/8) < (n/6)){
				count_total_box=n/8;
				return count_total_box;

			}
		}
		else{
			count_eight_box=(n/8);

			if(n-(count_eight_box*8) < 6){
				count_eight_box=(n/8)-1;
				if(count_eight_box!=0){
					if((n-(count_eight_box*8))%6!=0){
						count_eight_box=(n/8)-2;
						count_six_box=(n-(count_eight_box*8))/6;
						count_total_box=count_eight_box+count_six_box;
						return count_total_box;
					}
					count_six_box=(n-(count_eight_box*8))/6;
					count_total_box=count_eight_box+count_six_box;
					return count_total_box;
				}
				
				else{
					count_total_box=-1;
					return count_total_box;
				}
			}
			if((n-(count_eight_box*8))%6==0){
				count_eight_box=(n/8);
				count_six_box=(n-(count_eight_box*8))/6;
				count_total_box=count_eight_box+count_six_box;
				return count_total_box;
			}
		}
		return count_total_box;
	}
};