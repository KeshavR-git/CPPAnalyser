#include <iostream>
#include <stdlib.h>
using namespace std;


class Inchworm{
	public:

		int lunchtime(int branch, int rest, int leaf){
			int consume = 0; 			//counter for leafs consumed
			int count = 0;				//while loop counter for the rests

    		//while rest is less than the end of the branch
			while(count < branch+1){
				
    			//if rest at leaf increment the leaf consumed
				if(count % leaf == 0){
					consume++;
				}

		    	//increment the rest by itself to keep it uniform
				count += rest;
			}

			return consume;
		}

};