#include <iostream>
using namespace std;

class EggCartons{
public:
	int minCartons(int n){
		/*if ((!(n%2 == 0)) || (n < 6) || (n == 10)){
			return -1;
		}*/
		return findMin(n, 0, 0);
	}

	int findMin(int aim, int currentEggs, int currentCartons){
		//cout << "checking current eggs: " << currentEggs << " ; checking current cartons: " << currentCartons << endl;
		if (currentEggs == aim){
			return currentCartons;
		}
		if (currentEggs > aim){
			return -1;
		}
		else{
			int add8 = findMin(aim, currentEggs + 8, currentCartons + 1);
			if (add8 == -1){
				return findMin(aim, currentEggs + 6, currentCartons + 1);
			}
			else{
				return add8;
			}
		}
	}
};