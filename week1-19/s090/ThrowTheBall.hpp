#include <iostream>
#include <vector>

class ThrowTheBall
{
  public:
  int timesThrown(int N, int M, int L)
  {
    int thrownTimes = 0;
    int currentPlayer = 0;
    std::vector<int> timesRecieved(N, 0); //Initialize the array values to 0

    while(true){
      timesRecieved[currentPlayer] = timesRecieved[currentPlayer] += 1;
      int timesBallHeld = timesRecieved[currentPlayer];

      if(timesBallHeld == M){
        break;
      }

      if(timesBallHeld % 2 == 0){ //Times the player has held the ball is even
        currentPlayer = currentPlayer += L;

        if(currentPlayer >= N){
          currentPlayer = currentPlayer - N;
        }
      } else { //Times the player has held the ball is odd
        currentPlayer = currentPlayer -= L;
        
        if(currentPlayer < 0){
          currentPlayer = N + currentPlayer;
        }
      }

      thrownTimes++;
    }

    return thrownTimes;
  }
};