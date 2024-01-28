#include <iostream>

class Inchworm {
public:
	int lunchtime(int branch, int rest, int leaf) {
		//Implementation
		int leafpos = 0;
		int wormpos = 0;

		//Will always eat first leaf
		int leafsEaten = 1;

		while(wormpos < branch) {

			//Moves the worm forward
			wormpos += rest;

			//If the worm has reached the end, break
			if(wormpos > branch) {
				break;
			}

			//Looks at the incoming leaf.
			while(leafpos < wormpos) {
				leafpos += leaf;
			}

			if(wormpos == leafpos) {
				leafsEaten++;
			}
		}

		return leafsEaten;
	}
};


