//#include 
using namespace std;
int XX_MARKER_XX;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int count = 0;
	int worm = 0;
	while (worm <= branch){
		if (worm%rest == 0){
			count++;
		}
		worm+=leaf;
	}
	return count;
  }
};