using namespace std;
int XX_MARKER_XX;
 
 
class ThrowTheBall
{
  public:
  int timesThrown(int N, int M, int L)
  {
    int x;
    int y;
    int z;
    if (N > L) {
        x = N;
        y = L;
        z = L;
    } else {
        x = L;
        y = N;
        z = N;
    }
	while (x%y!=0)
	{
		z = x%y;
		x = y;
		y = z;	
	};
    return N/z*(M-1);
  }
};