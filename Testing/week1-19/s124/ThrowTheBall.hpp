#include <iostream>
#include <array>
using namespace std;
int XX_MARKER_XX;


class ThrowTheBall
{
  public:
  int timesThrown(int N, int M, int L)
  {
    //initialise array for the circle
    int friends[N];

    //initialise all counts to 0
    for(int i = 0; i < N; i++)
    {
      friends[i] = 0;
    }

    //start with first player (index 0)
    int currentPlayer = 0;
    friends[currentPlayer] ++;
    int passes = 0;


    while(1){

      if (friends[currentPlayer] >= M){
        return passes;
      }

      if(friends[currentPlayer] % 2 == 0){ // P is even
        //pass the ball L places to the left
        currentPlayer = currentPlayer - L;

        //this line of code taken from:
        //https://stackoverflow.com/questions/13794171/how-to-make-the-mod-of-a-negative-number-to-be-positive?rq=1
        currentPlayer =((currentPlayer % N) + N) % N;

      } else { // P is odd
        //pass the ball L places to the right
        currentPlayer = (currentPlayer + L ) % (N);  
      }

      friends[currentPlayer]++;
      passes ++;
      
    }

  }
};