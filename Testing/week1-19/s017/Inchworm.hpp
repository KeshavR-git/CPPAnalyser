using namespace std; 
int XX_MARKER_XX;
 
class Inchworm {
  	public:
  	int lunchtime(int branch, int rest, int leaf) {
  		int counter = 0;

  		for (int i = 0; i <= branch; i += leaf) {
  			if (i%rest == 0) {
  				counter++;
  			}
  			else if (i == 0) {
  				counter++;
  			}

  		}
		return counter;  // return your result
  	}
};