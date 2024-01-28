#include <iostream>
using namespace std;




class Inchworm{
public:
	//default constructor
	Inchworm(){}

	//method to calculate number of leaves eaten;
	int lunchtime(int branch, int rest, int leaf){
	//for leaf at 0
	eatLeaf = 1;
	leafNum = leaf; 
	while(leafNum <= branch){
			if(leafNum % rest == 0){			
				eatLeaf++;
			}
			leafNum = leafNum + leaf;
		}
	return(eatLeaf);
}

protected:


private:
	int eatLeaf;
	int leafNum;

};
