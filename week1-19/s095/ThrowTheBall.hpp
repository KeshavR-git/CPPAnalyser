#include <iostream>
using namespace std;
 
class ThrowTheBall
{
  public:
  int timesThrown(int N, int M, int L)
  {
    int count=0;
    int playernum[N-1];
    for (int i = 0; i < N; ++i)
    {
      playernum[i] = 0;
    }
    playernum[0] = 1;
    int N1 = 1;
    while(playernum[N1-1]<M){
      if (playernum[N1-1]%2==1)
      {
        N1-=L;
        //cout<<N1<<endl;
      }
      else if(playernum[N1-1]%2==0){
        N1+=L;
      }
      
      if (N1>N)
      {
        N1-=N;
      }
      else if (N1<1)
      {
        N1+=N;
      }
      int num = playernum[N1-1];
      playernum[N1-1] = num+1;
      count++;
    }
    return count;  // return your result
  }
};
