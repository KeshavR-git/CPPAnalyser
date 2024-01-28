#include <iostream>
using namespace std;



class EggCartons{
public:
	//default constructor
	EggCartons(){}

	//function to
	int minCartons(int n){
		//setting initial values for calculations
		div8= n;
		cartCount8 = 0;
		cart8 = 0;

		//return -1 for odd or number < 6 or = 10, 16
		if(n % 2 != 0 || n < 6 || n == 10){
			return(-1);
		}

		//equation to find min num of cartons
		for(int i = 0; div8 % 8 != 0; i++){

			if(div8 == 6){
				return(cartCount8 + 1);
			}else if(div8 == 12 || div8 == 18){
				return(div8/6 + cartCount8);
			}

			div8 = div8 - 8;
			cartCount8++;
		}

		//return number of cartons
		return(div8/8 + cartCount8);
	
	}




private:
	int div8, cartCount8, cart8;


};