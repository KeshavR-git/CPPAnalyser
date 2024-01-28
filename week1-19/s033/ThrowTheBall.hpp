
class ThrowTheBall {
public:
	int timesThrown(int,int,int);
};


int ThrowTheBall::timesThrown(int N, int M, int L){
	int throws[50];
	for(int i=0;i<50;i++){
		throws[i]=0;
	}
	int i = 0;
	int hasBall = 0;
	for(i=0;i<M*N;i++){
		throws[hasBall]++;
		if(throws[hasBall]>=M){
			break;
		}
		hasBall+=L*(((throws[hasBall]%2)*2)-1);
		if(hasBall<0){
			hasBall+=N;
		}
		hasBall=hasBall%N;
	}
	return i;
}
