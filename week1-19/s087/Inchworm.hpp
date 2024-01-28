using namespace std;
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    // your code for the problem
    int res = 0;
    bool restMax;

    //Testing whether the leaf or rest value is greater
    if(rest >= leaf) {
    	restMax = true;
    }else {
    	restMax = false;
    }

    //Worm of Leaf Position
    int i = 0;

    while(i <= branch) {
    	//Start of branch must have a leaf
    	if(i == 0) {
    		res++;
    	}else if(restMax) {
    		//If incrememnting by the rest, test modulus against the leaves
    		if(i%leaf == 0) {
    			res++;
    		}
    	}else {
    		//If incrementing by the leaf, test modulus against the rests
    		if(i%rest == 0) {
    			res++;
    		}
    	}

    	//Increment the position based on which value is higher.
    	if(restMax) {
    		i += rest;
    	}else {
    		i += leaf;
    	}
    }
    return res;  // return your result
  }
};