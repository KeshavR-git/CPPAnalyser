#include <iostream>
#include "math.h"
/*
#
#		int lunchtime(int branch, int rest, int leaf)
#			return number_of_leaves_consumed
#
#		Branch: Length of branch
#		Rest: Distance travelled by inchworm between rests
#		Leaf: Distance between consecutive leaves
#
*/


class Inchworm
{
public:
	int lunchtime(int branch, int rest, int leaf)
	{
		//	Check which value is smaller, as the larger value may be a multiple
		//	of the smaller value
		int lcm;
		if(rest>leaf)
			lcm=leaf;
		else
			lcm=rest;

		//	As the lcm must be between 0 and 1000000 (the branch size),
		//	iterate over the loop until the lcm is divisible by rest and leaf.
		//	Since lcm must be a multiple of the minimum (leaf||rest) then, 
		//	increment the lcm by multiplying the minimum by 1,2,...
		for(int i=1; i<(1000000/lcm); i++)
		{
			int temp_lcm = lcm * i;

			if(temp_lcm % rest==0 && temp_lcm % leaf==0)
			{
				lcm = temp_lcm;
				break;
			}
		}

		//	return number of times the leaf & rest stops line up along branch
		return branch / lcm +1;
	}
};