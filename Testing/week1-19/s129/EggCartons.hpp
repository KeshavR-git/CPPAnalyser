#include <iostream>
#include <string>
using namespace std;
int XX_MARKER_XX;
class EggCartons{
public:
	int minCartons(int n){
		int pre_num=100;
		int new_num=0;
		int numof6=0;
		int numof8=0;
		bool result=false;
		for(int i=(n-n%6)/6;i>-1;i--){
			numof6=i*6;
			for(int j=(n-n%8)/8;j>-1;j--){
				numof8=j*8;
				if(numof6+numof8==n){
					result=true;
					new_num=i+j;
					if(pre_num>new_num){
						pre_num=new_num;
					}
				}
				if(numof6==n){
					result=true;
					new_num=n/6;
					if(pre_num>new_num){
						pre_num=new_num;
					}
				}
				if(numof8==n){
					result=true;
					new_num=n/6;
					if(pre_num>new_num){
						pre_num=new_num;
					}
				}
			}
		}
		if(result==true){
			return pre_num;
		}else{
			return -1;
		}
	}
};
