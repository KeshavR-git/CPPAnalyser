#include <iostream>
using namespace std;
 
class EggCartons
{
public:
	int minCartons(int n){
		int min;
		if(n == 6 || n==8){
			return 1;
		}
		if(n == 12 || n == 14){
			return 2;
		}
		if(n == 18){
			return 3;
		}
		if(n % 2 == 1 || n < 12  && n != 6){
			return -1;
		}
		if( n%8 == 0){
			min = n/8;
		}
		if(n >= 20 && n%2 == 0 && n%8 != 0){
			min = n/8+1;
		}
		return min;
	}

};