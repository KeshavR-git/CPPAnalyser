//#include <iostream>
//using namespace std;


class Inchworm{
public:
	int lunchtime(int branch, int rest, int leaf){
		int numEaten=1;
		int restPos=0;
		int nextLeaf=leaf;
			if(leaf>branch){
				return 1;
			} else {
				while(restPos<branch){

					//move bug
					restPos=restPos+rest;
					//cout << "next rest pos is" << restPos << endl;


					//see if bug has skipped a leaf
					while(restPos>nextLeaf){
						nextLeaf=nextLeaf+leaf;
					//	cout << "next leaf pos is" << nextLeaf << endl;
					}

					if(restPos>branch){
						break;
					}

					//check if bug is on leaf
					if(restPos==nextLeaf){
					//	cout << "eaten! at pos" << restPos << endl;
						numEaten++;
					}

				}
				return numEaten;
			}
		}
};