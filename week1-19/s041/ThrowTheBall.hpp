using namespace std;
 
 
class ThrowTheBall
{
  public:
  int timesThrown(int N, int M, int L){

	int nFriends[N];
	for (int i = 0; i < N; i++){
		nFriends[i] = 0;
	}
	int currentPlayer = 0;
	int passes = 0;
	bool game = true;
	while (game){
		nFriends[currentPlayer]++;
		
		if (nFriends[currentPlayer] == M){
			game = false;
		}
		else{
			passes++;
		}

		if (L%2 == 0){
			currentPlayer-= L;
			if (currentPlayer < 0){
				currentPlayer= N + currentPlayer;
			}
		}

		else{
			currentPlayer+= L;
			if (currentPlayer > N){
				currentPlayer-= N;
			}
		}

	}

	
	return passes;
	}
};