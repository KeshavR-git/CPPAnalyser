#include <iostream>
#include <vector>
using namespace std;

class ThrowTheBall
{
    public:
    int timesThrown(int N, int M, int L)
    {
        vector<int> playerCounter(N);
        int counter = 0;
        int turn = 1;

        while (1) {
            if (playerCounter[turn-1] % 2 == 0) {           //assume that we're going clockwise, left is going clockwise
                turn -= L;
            } else if (playerCounter[turn-1] % 2 == 1) {   //right is counter clockwise
                turn += L;
            }

            if (turn > N) {         //if couter is larger than N
                turn = turn - N ;    
            } else if (turn < 1) {             //if counter is smaller than 1
                turn = N + turn;
            }
          
            playerCounter[turn-1]++;          //add one to the player that is passed to this turn
            if (playerCounter[turn-1] == M) {     //if they got passed M times, game end, stop the loop
                break;
            }
            counter++;
        }
        return counter;
    };
};
