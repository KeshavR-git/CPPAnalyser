#include <iostream>
using namespace std;
int XX_MARKER_XX;
 
 
class ThrowTheBall
{
  public:
  int timesThrown(int N, int M, int L)
  {
    //array of players
    int players[N];
    //counter for result
    int res = 0;
    //iterator
    int i = 0; 
    //amount of passes value
    int p = 0; 

    //set player to zero 
    for(int i = 0; i < N; i++){
      players[i] = 0 ;
    }
 
    while(p != M) {

      //initial condition 
      if(M == 1){
        return 0;
      }

      //correct i value so its not < 0 and > N
      if(i < 0){
        i = i + N ;
      }else if (i > N - 1){
        i = i - N ;
      }

      //add a touch to the player at i
      players[i] = players[i] + 1;
      //set the pass value to the touches of current player
      p = players[i];

      //if even 
      if(p % 2 == 0){
        i = i + L;
        res++;
      //if odd
      }else{
        i = i - L;
        res++;
      }
    }
    //res needs one less pass
    res --;
    return res;
  }
};





