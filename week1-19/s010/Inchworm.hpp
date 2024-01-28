using namespace std;

class Inchworm {
public:

	int lunchtime(int branch, int rest, int leaf) {
		int ate = 0;		// counter of no. times the worm has eaten
		
		// for each unit the worm rests on the branch...
		for(int i = 0; i <= branch; i = i + rest) {
			// if there is a leaf on that unit, update count
			if(i % leaf == 0) {
				ate++;
			}
		}
		
		// return
			return ate;
	}

};