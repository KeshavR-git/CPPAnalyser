#include <iostream>
using namespace std;


class EggCartons{
public:
	int minCartons(int num){
		int min = 0;
		int count = 0;
		while(true){
			if(num%8==0){
				min+=num/8;
				num=num%8;
			} else {
				num=num-6;
				min++;
			}
			if(num==0){
				return min;
			} else if(num <6){
				return -1;
			}
		}
	}
};