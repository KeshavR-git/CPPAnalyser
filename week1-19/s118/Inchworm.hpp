#include <iostream>
using namespace std;

class Inchworm{
public:
	int lunchtime(int branch, int leaf, int rest){
		int result = 0;
		int wormPosition = 0;
		int leafPosition = 0;
		while (wormPosition <= branch){
			if (wormPosition == leafPosition){
				result ++;
				//cout << "position: " << wormPosition << ", " << leafPosition << endl;
				//cout << "running result: " << result << endl;
				wormPosition = wormPosition + rest;
				leafPosition = leafPosition + leaf;
			}
			else if (wormPosition < leafPosition){
				wormPosition = wormPosition + rest;
			}
			else if (wormPosition > leafPosition){
				leafPosition = leafPosition + leaf;
			}

		}
		return result;
	}
};