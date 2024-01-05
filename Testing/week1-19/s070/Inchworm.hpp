#include <iostream>
using namespace std;
int XX_MARKER_XX;


class Inchworm{

	public:
		
		int lunchtime(int branch, int rest, int leaf){

			int lcm, eat;

			if(rest>leaf)
		        lcm = rest;
		    else
		        lcm = leaf;
		    
		    while(1) {
		        
		        if( lcm % rest == 0 && lcm % leaf == 0 ){
		        	
		        	break;
			    
			    }			    
			    
			    lcm++;

			}
			
			eat = branch/lcm + 1;

			return eat;

		}

};