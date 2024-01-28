using namespace std;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    // your code for the problem
    int res, pos;
    res = 0;
    pos = 0;

    while (pos <= branch) {
    	if (pos%leaf == 0) {
    		res++;
    	}
    	pos += rest;
    }
    return res;  // return your result
  }
};