using namespace std;

class ThrowTheBall {
	public:
	int timesThrown(int N, int M, int L) {
		int noTimes=0;
		int P=0;
		int index=0;
		int array[50]={0};
		if(M==1) {
			return 0;
		}
		while(P<M) {
			array[index]++;
			if (array[index]%2==0) {
				index=index+L;
				if (index>=N) {
				index=index-N;
				}
			} else {
				index=index-L;
				if (index<0) {
					index=N+index;
				}
			}
			for(int i=0;i<N-1;i++) {
				if (array[i]>P) {
					P=array[i];
				}
			}
			if (P<M) {
				noTimes++;
			}
		}
	return noTimes;

	}	
};