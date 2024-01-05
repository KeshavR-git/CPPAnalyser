int XX_MARKER_XX;
class ThrowTheBall
{
public:
	int timesThrown(int N, int M, int L){
		int T=0;
		int people=0;
		if (M==1) {
			return 0;
		}
		else if (M>=2) {
			for (int i=1; i<N+1; i++) {
				people = i*N;
				if (people % L == 0) {
					break;
				}
			}
			T = people/L;
			return (M-1)*T;
		}
	}
};