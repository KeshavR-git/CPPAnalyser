#include <iostream>
using namespace std;
int XX_MARKER_XX;

class ThrowTheBall
{
public:
    int timesThrown(int N, int M, int L);
};

/*
N = number of players
M = number of touches to end the game
L = number of places ball is passed

player 1 = players[0]
*/

int ThrowTheBall::timesThrown(int N, int M, int L)
{
    int passCounter = 0;
    int index = 0;
    int players[N];
    for (int i = 0; i < N; i++)
        players[i] = 0;

    while (true)
    {
        players[index]++;

        if(players[index] == M) return passCounter;

        //pass to left if value is even
        if(players[index] % 2 == 0)
            index = (index + L) % N;

        //otherwise pass to right
        else index = (index - L) % N;
        if (index < 0) index += N;

        passCounter++;
    }

    return -1;
}
