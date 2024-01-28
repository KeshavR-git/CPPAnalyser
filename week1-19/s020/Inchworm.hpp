#include <iostream>
using namespace std;

class Inchworm {

public:

	int lunchtime(int branch, int rest, int leaf){
		eaten=1;
		numleaf=leaf;
	//keep looping while the branch still exists
		while( numleaf <= branch ){
		//if the distance of the leaf along the branch is divisible by the rest, eats the leaf
			if (numleaf % rest == 0){
				eaten++;
			}
		//moves to the next leaf
			numleaf = numleaf + leaf;
		}
	return(eaten);
	};

protected:

private:
	int eaten, numleaf;
};