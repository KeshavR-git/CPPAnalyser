#include <iostream>
using namespace std;


class EggCartons
{
public:
	int minCartons(int n)
	{
		if(n%2 != 0){
			return -1;
		}else{
			int carton = (n/24)*3;
			int remain = n%24;
			int eight = remain/8;
			int six = remain/6;
			if(remain-8*eight != 6 && remain-6*six != 8 && remain%8 != 0 && remain%6 != 0 && remain%6 != 2 && remain%6 != 4 && remain%8 != 2 && remain%8 != 4){
				return -1;
			}else if(n < 6 || n == 10){
				return -1;
			}else{
				if(remain == 0){
					return carton;
				}else if(remain-8*eight == 6){
					return carton + eight + 1;
				}else if(remain-6*six == 8){
					return carton + six + 1;
				}else if(remain%6 == 0){
					return carton + remain/6;
				}else if(remain%8 == 0){
					return carton + remain/8;
				}else if(remain%8 == 2){
					return carton + eight + 1;
				}else if(remain%6 == 2 && remain != 2){
					return carton + six;
				}else if(remain == 2){
					return carton + 1;
				}else if(remain%6 == 4){
					return carton + six + 1;
				}else if(remain%8 == 4){
					return carton + eight + 1;  
				}
			}
		}
	}
};
