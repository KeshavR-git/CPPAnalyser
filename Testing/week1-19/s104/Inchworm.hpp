#include <iostream>
using namespace std;
int XX_MARKER_XX;

 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    // your code for the problem
  	int distSum = 0;		// total distance traveled
  	int leavesEaten = 0;	// the beginning leaf is always eaten
  	while ( distSum <= branch )
  	{
  		// leaf check
  		if ( distSum%leaf == 0 ){
  			leavesEaten++;
  		}
      // inchworm travel
      distSum += rest;
  	}


    return leavesEaten;  // return your result
  }
};
