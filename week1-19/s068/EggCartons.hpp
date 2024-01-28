using namespace std;
 
 
class EggCartons
{
  public:
  int minCartons(int n)
  {
    // your code for the problem
    if (n < 6 || n % 2 != 0) {
    	return -1;
    }
    else if (n % 8 == 0) {
    	return n / 8;
    }
    else if (n % 6 == 0) {
    	return n / 6;
    }
    else {
    	for (int six = 0; six < 100; six++) {
    		for (int eight = 0; eight < 100; eight++) {
    			if (6 * six + 8 * eight == n) {
    				return six + eight;
    			}
    		}
    	}
    }
    return 0;  // return your result
  }
};