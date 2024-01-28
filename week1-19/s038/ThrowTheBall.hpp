#include <iostream>
using namespace std;
 
class ThrowTheBall
{
  public:
  int timesThrown(int N, int M, int L){
    int times = 0;
    if (M < 2)
    {
      return 0;
    }
    int player[N];
    for (int i = 0; i < N; ++i)
    {
        player[i] = 0;
    }
   
    player[0] = 1;
    int ball_keeper = 0;
    while(player[ball_keeper] < M)
    {
      if (player[0]%2 == 0)
      {
        if (ball_keeper+L > N)
        {
          ball_keeper = ball_keeper-N+L;
        }
        else if(ball_keeper+L < N)
        {
          ball_keeper = ball_keeper+L;
        }
        else if (ball_keeper+L == N || ball_keeper-L == N)
        {
          ball_keeper = 0;
        }     
        player[ball_keeper]+=1;
        //cout<<"left player number :"<<ball_keeper<<" the times of keep ball:"<<player[ball_keeper]<<endl;
        times++;
      }
      else if (player[0]%2 != 0)
      {
          if (ball_keeper-L < 0)
          {
            ball_keeper=N+ball_keeper-L;
          }
          else if(ball_keeper-L > 0)
          {
            ball_keeper=ball_keeper-L;
          } 
          else if (ball_keeper+L == 0 || ball_keeper-L == 0)
          {
            ball_keeper = 0;
          }
        player[ball_keeper]+=1;
        //cout<<"right player number:"<<ball_keeper<<"the times keep ball:"<<player[ball_keeper]<<endl;
        times++;
      }
    }
    return times;
  }

};