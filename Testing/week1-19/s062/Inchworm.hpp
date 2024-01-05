#include <iostream>
int XX_MARKER_XX;

//using code structure from Prac Instructions
class Inchworm
{
  public:

  //Brute Force approach - put in all the leaves, and see how many the worm eats
/*
  int lunchtime(int branch, int rest, int leaf)
  {

  	int branchRemaining = branch;
  	int leavesEaten = 1;

  	//create the leaves along the branch
  	int* leaves = new int;
  	int currLeaf = 0;
  	int numLeaves = 0;
  	while(currLeaf <= branch) {
  		leaves[numLeaves] = currLeaf;
  		std::cout << "leaf at ";
  		std::cout << leaves[numLeaves] << std::endl;
  		currLeaf += leaf;
  		numLeaves++;
  	}

    while(branchRemaining > 0) {
    	branchRemaining -= rest;
    	for(int i=0; i<numLeaves; i++){
    		if(branch-branchRemaining == leaves[i]){
    			leavesEaten++;
    		}
    	}
    }
    return leavesEaten;
  }
*/


//increasing efficiency by removing leaves array
//using maths to see if inchworm rests at a leaf
  int lunchtime(int branch, int rest, int leaf)
  {

    int distanceTraveled = 0;
    //she will always eat the first leaf
    int leavesEaten = 1;

    while(distanceTraveled < branch) {
      distanceTraveled += rest;

      //if the distance traveled is a multiple of leaf,
      //she will eat a leaf
      if(distanceTraveled%leaf == 0 && distanceTraveled <= branch){
        leavesEaten++;
      }
    }
    return leavesEaten;
  }

};
