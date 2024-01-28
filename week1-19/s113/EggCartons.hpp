

class EggCartons {
public:
	int minCartons(int n){
		if(n < 6)
			return -1;
		if(n%2==1)
			return -1;
		//there are 8-cartons and 6-cartons.
		int minNum = n/8;
		if((minNum * 8) == n){
			return minNum;
		}

		minNum ++;
		int eggsWeHave = 8 * minNum;
		int difference = eggsWeHave - n;
		//each 8 carton turned into a 6 carton reduces the number of eggs we have by 2.
		//the number of times we have to do this reduction is the number of eights
		//that need to be swapped with a 6;
		int numEightsToSix = difference/2;

		if(numEightsToSix > minNum) {
			return -1;
		}

		//minNum was shown to still be valid
		return minNum;
	}
};