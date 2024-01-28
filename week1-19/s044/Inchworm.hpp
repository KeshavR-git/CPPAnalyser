using namespace std;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
  	int pos = 0;									// Initialize Variables
  	int res = 0;
    while (pos <= branch) {						// While loop to walk the branch
    	if ( pos % leaf == 0) {						// If statement to find if on a leaf and add 1 to res if true
    		res++;
    	}
    	pos = pos + rest;							// Move to next position (pos) on branch
    }
    return res;  // return your result
  }
};
