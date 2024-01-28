#include <iostream>
using namespace std;

 
 
class ThrowTheBall
{
  public:
  int timesThrown(int N, int M, int L)
  {
    int num_throws=0;

    int players[N];
    int ball_holder=0;
    for (int i=0; i<N; i++) {
      players[i]=0;
    }

    players[0] = 1;
    bool play = 1;

    if (M <= 1) {
      return num_throws;
    }

    while (play) {

      if (players[ball_holder] % 2 == 0) {
        //throw L left (+)
        ball_holder += L;
        if (ball_holder >=N ) {
          ball_holder = ball_holder % N;
        }
      }
      else {
        //throw L right (-)
        ball_holder -= L;
        if (ball_holder < 0 ) {
          //ball_holder = ball_holder % N;
          ball_holder = (N + ball_holder) % N;
        }
      }
      num_throws++;
      players[ball_holder]++;
      //std::cout<<"current holder is: "<<ball_holder<<std::endl;
      for (int i=0; i<N; i++) {
        if (players[i]>=M) {
          play=0;
          return num_throws;
        }
      }
    }

    return num_throws;
  }
};