class ThrowTheBall{
public:
	int timesThrown(int N, int M, int L){

		int count=0;
		int current=0;

		int *players = new int[N];
		for(int i=0;i<N;i++){
			players[i]=0;
		}

		//first player starts with ball
		players[0]=1;

		//check if current holder has held ball M times, otherwise pass
		while(players[current]<M){
			//increment pass count
			count++;

			//check if held odd or even and pass cirection accordingly
			//also look back to start or end of loop if position out of bounds
			if(players[current]%2==0){
				current=current+L;
				if(current>N-1){
					current=current-N;
				}
			} else {
				current=current-L;
				if(current<0){
					current=current+N;
				}
			}

			//increments hold count and breaks look if condition met
			players[current]++;
			if(players[current]>=M){
				break;
			}
		}


		return count;
	}

};