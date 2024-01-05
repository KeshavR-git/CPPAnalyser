#include <iostream>
using namespace std;
int XX_MARKER_XX;




class EggCartons
{
  public:
  int minCartons(int n)
  {

  	int cartons = 0;
	    
  	for (int i = n; i > 0; i -=6){

      if( i < 6){
        return -1;
      }
  		if (i % 8 == 0){
        return i/8 + cartons;
        }

	    cartons ++;
  	}

  	return cartons;

  }
};