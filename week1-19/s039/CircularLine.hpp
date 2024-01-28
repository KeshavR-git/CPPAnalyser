#include <iostream>
#include <vector>

class CircularLine {
public:
	int longestTravel(std::vector<int> t) {

		//calculate sum.
		int sum = 0;
		for(int i=0; i<t.size(); i++) {
			sum += t[i];
		}
		int halfSum = sum/2;
		//Go around the circle, find the biggest track that's less than half the sum.
		int max = 0;
		for(int i=0; i<t.size(); i++) {
			//Calculate the biggest track from pos i
			int trackSize = 0;
			int k = 0;
			int newIndex=i;
			while(true) {

				//Calculating new index. Which increments up to N and then gets set back to zero.
				//We want to stop adding if it's just about to hit the halfway mark.
				if(trackSize + t[newIndex] > halfSum) {
					break;
				}
				trackSize += t[newIndex];
				newIndex++;
				if(newIndex == t.size()) {
					newIndex = 0;
				}
			}
			//Set max if this one is bigger than the previous
			if(trackSize > max) {
				max = trackSize;
			}
		}
		return max;
	}
};