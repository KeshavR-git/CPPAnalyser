using namespace std; 
int XX_MARKER_XX;
 
class EggCartons {
  	public:
  	int minCartons(int n) {
  		int bigs = 0;
		int smalls = 0;
		
		if (n % 8 == 0) return n/8;		
		
		bigs = n/8;
		
		while (bigs > 0) {
			while (bigs*8 + smalls*6 < n) {
				smalls++;
			}
			if (bigs*8 + smalls*6 == n) {
				return bigs+smalls;		
			}
			bigs--;
		}
		if (n % 6 == 0) return n/6;

		return -1;  // return your result
  	}
};