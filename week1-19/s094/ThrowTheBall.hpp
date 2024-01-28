#include <iostream>
using namespace std;

class ThrowTheBall
{
public:
  int timesThrown(int N, int M, int L)
  {
    int player1 = 0;
    int res = 0;
    if(M > 1)
    {
      int i = 0;
      while(i<=N-1)
      {
        if(i == 0)
        {
          player1++;
        }
        if(player1 == M)
        {
          return res;
        }
        i += L;
        res++;
        if(i > N-1)
        {
          i = i-N;
        }
      }
    }
    return 0;
  }
};
