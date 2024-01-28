#include <stdlib.h>
#include <iostream>
using namespace std;

class Inchworm
{
	public:
	int lunchtime(int branch, int rest, int leaf)
	{
		// branch is length of branch
		// rest is distance between rests
		// leaf is distance between leaves
		int leaves = 0;
		int dist = 0;

		while(dist <= branch){

			if(dist % leaf == 0){ // distance is where a leaf is at

				leaves++;
			}

			dist += rest;
		}

		return leaves;
	}
};