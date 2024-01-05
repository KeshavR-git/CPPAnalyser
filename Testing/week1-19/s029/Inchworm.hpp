using namespace std;
int XX_MARKER_XX;

class Inchworm
{
  public:
  	int LCM(int a,int b){
		int max = a>b ? a : b;
		int min = a<b ? a : b;
		for (int i = min; i<+a*b; i++) {
			if (i%a == 0 && i%b == 0) {
				return i;
			}
		}
	}
  int lunchtime(int branch, int rest, int leaf)
  {
    int lcm=LCM(rest,leaf);
    int res=(branch/lcm)+1;
    return res;  // return your result
  }
};
