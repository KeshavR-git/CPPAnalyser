int XX_MARKER_XX;
class ThrowTheBall
{
public:
	int timesThrown (int N, int M, int L){
		int Pos=1;
		int passNum=0;
		int* A = new int[N]();
		A[0]=1; //person 1 has the ball at first
		L = L % N; //take remainder, disregard multiples of N because it just loops the circle
		while (A[Pos-1]<M){
			if (A[Pos-1]%2==0){ //even, go left
				Pos+=L; //pass to L positions to the left
				if (Pos>N){
					Pos-=N; //exceeds N, Pos start from 1
				}
			}else{ //odd, go right
				Pos-=L; //pass to L positions to the right
				if (Pos<=0){
					Pos+=N; //below zero, Pos start from end of circle
				}
			}
			A[Pos-1]++; // number of passes received increment
			passNum++; // number of passes made increment
		}
		return passNum;
	}
};