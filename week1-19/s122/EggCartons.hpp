#include <iostream>
using namespace std;

class EggCartons{
public:
	int minCartons(int n){
		if (n<1 || n> 100 ){
			return -1;
		}
	
		if (n%2 != 0){
			return -1; //No combinations as the number of eggs aren't even
		}
		if (n<6){
			return -1; //No combinations as the number of eggs is too little
		}
		int eggsremaining = n;
		int cartons = 0;
		while (eggsremaining>0){
			
			int eggs_6 = eggsremaining-6;
			int eggs_8 = eggsremaining-8;
			if (eggs_8%3 == 0 || eggs_8%4 == 0){ //ensuring that the next number is divisible by 8 or 6, otherwise we pick n-6.
				eggsremaining = eggs_8; 
			}
			else if (eggs_6>=6 || eggs_6 == 0){
				eggsremaining = eggs_6;
			}
			else {
				return -1;
			}
			cartons += 1;
			//cout << eggsremaining << endl;
		}
		return cartons;
	}
};