int XX_MARKER_XX;
class Inchworm
{
public:
	int lunchtime(int branch, int rest, int leaf){
	// your code for the problem
		int res = 0;
		int restTime = branch/rest;
		for (int i =0; i <=restTime; i++) {
			int len = i*rest;

			if (len % leaf == 0){
				res++;
			}
		}
		return res;  // return your result
	}
};