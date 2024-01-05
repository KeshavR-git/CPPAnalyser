using namespace std;
int XX_MARKER_XX;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int x;
    int y;
    int z;
    if (rest > leaf) {
        x = rest;
        y = leaf;
        z = leaf;
    } else {
        x = leaf;
        y = rest;
        z = rest;
    }
	while (x%y!=0)
	{
		z = x%y;
		x = y;
		y = z;	
	};
	int cm = (rest*leaf)/z;
    if (cm > branch) {
        return 1;
    }  else {
        return branch/cm+1;
    }
  }
};