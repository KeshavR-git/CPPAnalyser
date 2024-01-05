#include <iostream>
using namespace std;
int XX_MARKER_XX;

class EggCartons{

	private:
		int cartons;

	public:
		int minCartons(int n){
			cartons = 0;

			//checks if it is possible to be calculated
			if (n %2 != 0 || n < 6 || n == 10){
				return (-1);
			}

			//calculates minimum amount of cartons
			while (n % 8 != 0){

				if (n == 6){
					return(1 + cartons);
				}
				//if its 12 or 18, it cannot be found using any mixture of 6 and 8, only 6
				if (n == 12 || n == 18){
					return(n/6 + cartons);
				}
				cartons ++;
				n = n - 8;
			}

			return (n/8 + cartons);

		};

};