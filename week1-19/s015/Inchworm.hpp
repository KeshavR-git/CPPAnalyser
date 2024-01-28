#ifndef Inchworm_h
#define Inchworm_h

class Inchworm{

	public:
		int lunchtime(int branch, int rest, int leaf){
			int leavesEaten = 0;
			int distance = 0;
			while (distance <= branch){
				if (distance%leaf == 0){
					leavesEaten++;
				}
				distance = distance + rest;
			}
		return leavesEaten;
		}
};

#endif