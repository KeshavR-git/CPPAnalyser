#include <iostream>
using namespace std;

class EggCartons
{
public: 

	int minCartons(int number)
	{			
		if (number < 6 || number % 2 == 1) {
			return -1;
		}						
		int counter = 0;
		if (number % 8 == 0) {				//explanation time: we check if that number is divisible by 6 or 8 or not. if yes, divide it
			return number/8;
		} 
		for (int m=1; m<4; m++) {				//if not, subtract it by 6, 12 and 18. we want to see how many 6s it takes for the number to become divisible by 3
			if ((number - m*6) % 8 == 0 && (number - m*6) > 0) {		//we don't check for more, since if it's divisible by 24, then it's also divisible by 8
				counter += (number - m*6)/8 + m;					//if we want to get the most cartons, minus 8, 16 and check if it's divisible by 6 instead		
			} 
		}
		if (counter > 0) {				//sometimes that number will not suit all 3 scenarios at all
			return counter;
		}
		if (number % 6 == 0) {			//if it can't do 2 things above, try divide by 6
			return number/6;
		}
		return -1;



	};

};