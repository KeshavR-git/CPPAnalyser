#include <iostream>
using namespace std;


class EggCartons
{
	public:
		int minCartons(int eggNumber) {

			// Edge cases or odd numbers
			if (eggNumber % 2 != 0 || eggNumber == 2 || eggNumber == 10 || eggNumber == 4){

				return -1;

			} else {

				// formula for number of egg cartons
				if (eggNumber % 8 == 0) {
					return (eggNumber / 8);
				} else {
					return ((eggNumber / 8) + 1);
				}
				
			}
		}
};