#include <iostream>
 
class EggCartons
{
	public:
		// default constructor
		EggCartons() {}

		// determine the minimum number of egg cartons required to buy n eggs
	  	int minCartons(int n)
	  	{
	  		// number of cartons containing six or eight eggs
		   	int rem, sixes, eights = 0 ;
		   	
		   	eights = n/8 ;			
		    rem = n%8 ;

		    while (rem%6 != 0) {
		    	eights-- ;
		    	rem += 8 ;
		    	if (eights < 0) { return -1 ; }
		    }

		    sixes = rem/6 ;

		    return sixes + eights ;
		}
};