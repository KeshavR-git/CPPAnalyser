#include <iostream>
int XX_MARKER_XX;
 
class Inchworm
{
	public:
		// constructor
		Inchworm() {}

		// advance along the brach and eat leaves if they occur at specified intervals
	  	int lunchtime(int branch, int rest, int leaf)
	  	{
		   	// the current position (in inches) of the worm along the branch
		   	int pos = 0 ;
		   	// the number of leaves eaten by the worm 
		   	int eat = 0; 
		   	
		   	while (pos <= branch) {
		   		// check if there is a leaf to be eaten
		   		if (pos%leaf == 0) {
		   			// eat the leaf
		   			eat = eat + 1 ;
		   		}
		   		// continue along the branch
		   		pos = pos + rest ;
		   	}  
		    
		    return eat;
		}

		// destructor
		~Inchworm() {}
};