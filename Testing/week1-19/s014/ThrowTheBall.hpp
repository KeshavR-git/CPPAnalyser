using namespace std;
int XX_MARKER_XX;

class ThrowTheBall{
	public:
	int timesThrown(int N, int M, int L){
		int p[N];
		int i = 0, count = 0;

		for(int i=0; i<N; i++)
			p[i]=0;
		
		while(true){

			p[i]++;

			if(p[i] == M){
				return count;
			}

			count ++;

			if(p[i] %2 == 0){ //even
				i = (i - L);
				if(i < 0)
					i += N;
			} else {  	//odd
				i = (i+L)%N;
			}
		}
	}
};