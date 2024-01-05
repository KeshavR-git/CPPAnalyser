#include <iostream>
using namespace std;
int XX_MARKER_XX;


class EggCartons{
public:
	int minCartons(int n){
		int res = 0;
		int left = 0;
		//the number of Eggs must be even number
		if (n%2 != 0){
			return -1;
		}
		//if that divied by 8 that will be the min cartons
		if (n%8 == 0){
			return n/8;
		}
		//if that divied by 6 will have some times can transfer to 8 one to decrease the cartons
		if (n%6 == 0){
			res = n/6;
			if (res>=4){
				left = res%4;
				return left+(res/4)*3;
			} else {
				return res;
			}
		}
		//else each time decrease 8 to check if can divide or not 
		while (n>=6){
			n-=8;
			res++;
			if (n%6 == 0){
				int subres = n/6;
				if (subres>=4){
					left = subres%4;
					return res+left+(subres/4)*3;
				} else {
					return res+subres;
				}
			}
		}
		return -1;
	}
};