using namespace std;
int XX_MARKER_XX;

class ThrowTheBall {
public:
	int timesThrown(int N, int M, int L);
private:
	int getNextPlayer(int* playerCountArray, int currentPlayer, int N, int L);
};


int ThrowTheBall::timesThrown(int N, int M, int L) {
	int totalTimes = 0;
	int* playerCountArray = new int[N] { 0 };
	int currentPlayer = 0;
	int currentPlayerCnt = 0;


	playerCountArray[currentPlayer] = 1;
	currentPlayerCnt = 1;

	while (currentPlayerCnt < M) {
		currentPlayer = getNextPlayer(playerCountArray, currentPlayer, N, L);
		playerCountArray[currentPlayer] += 1;
		currentPlayerCnt = playerCountArray[currentPlayer];
		totalTimes += 1;
	}

	delete[]playerCountArray;
	return totalTimes;
}

int ThrowTheBall::getNextPlayer(int* playerCountArray, int currentPlayer, int N, int L) {
	int nextP = -1;
	if (playerCountArray[currentPlayer] % 2 == 0 && playerCountArray[currentPlayer] != 0) {
		nextP = currentPlayer + L;
		if (nextP >= N) {
			nextP = currentPlayer - N + L;
		}
	}
	else {
		nextP = currentPlayer - L;
		if (nextP < 0) {
			nextP = currentPlayer - L + N;
		}
	}
	return nextP;
}