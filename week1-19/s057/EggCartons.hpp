#include <iostream>
using namespace std;
 

class EggCartons
{
  public:
  int minCartons(int n)
  {

 
  	if (n % 2 == 0){

  		for(int c6 = 0; c6 < 17; c6++){

				for(int c8 = 0; c8 < 13; c8++){
				
					if (n == c6 * 6 + c8 * 8){
						//cout << c6 << " " << c8 << endl;
						return c6+c8;
					}
				}
			}
  		

  	}

  	else if ( n < 6 || n % 2 != 0){
  		return -1;
  	}
  	
  	return -1;
  }
	
	
  
};