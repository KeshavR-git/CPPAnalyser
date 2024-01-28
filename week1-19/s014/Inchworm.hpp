using namespace std;

class Inchworm{
	public:
	int lunchtime(int branch, int rest, int leaf){
		int res = 1; //each worm eat at position = 0
		int small, bigger, current;

		if(rest>leaf){      //find the larger value
			bigger = rest;
			small = leaf;
		} else {
			bigger = leaf;
			small = rest;
		}

		current = bigger; 

		while(current<=branch){
			if(current%small == 0){ //count when the position of rest = leaf position
				res++;
			}
			current+=bigger;
		}
		return res;
	}
};
