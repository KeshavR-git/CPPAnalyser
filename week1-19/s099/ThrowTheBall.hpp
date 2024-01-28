using namespace std;
#include <iostream>

 
class ThrowTheBall
{
  public:
  int timesThrown(int N, int M, int L)
  {
    // your code for the problem
    int p[N], ballHolder, res;
    for (int i = 0; i < N; i++) {
      p[i] = 0;
    }
    res = 0;
    ballHolder = 0;
    
    while (p[ballHolder%N] < M) {
      if (p[ballHolder%N]%2 == 0) {
        ballHolder += L;
      } else {
        ballHolder += N-L;
      }
      p[ballHolder%N]++;
      res++;
    }
    res--;
    return res;  // return your result
  }
};