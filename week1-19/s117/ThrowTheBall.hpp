#include<stdio.h>

class ThrowTheBall {
    public:
    int timesThrown(int N, int M, int L) {
        int *players = new int[N];
        for (size_t i = 0; i < N; i++) {
            players[i] = 0;
        }
        int throws = 0;
        int currentPlayer = 0;
        while (players[currentPlayer] < M-1) {
            players[currentPlayer]++;
            throws++;
            if (players[currentPlayer] % 2 == 0) {
                //even
                currentPlayer-=L;
                if (currentPlayer < 0) {
                    currentPlayer +=N;
                }
            } else {
                //odd
                currentPlayer+=L;
                if (currentPlayer > N-1) {
                    currentPlayer -=N;
                }
                
            }
        }
        delete[] players;
        return throws;
    }
};