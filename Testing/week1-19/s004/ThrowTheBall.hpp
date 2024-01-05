#include <iostream>
#include <vector>
using namespace std;
int XX_MARKER_XX;

class ThrowTheBall {
  vector<int> players;
  int timesThrown(int N, int M, int L, int P, int count) {
    /*
    players[P]++;
    count++;
    cout << P+1 << " : " << players[P] << endl;

    if(players[P] == M) {
      cout << "hey" << endl;
      return count;
    }

    if(players[P] == P+1) {
      int newPos =0;
      cout << "ey" << endl;

      if (P % 2 == 0) {
        newPos = P - L;
      } else {
        newPos = P + L;
      }

      if (newPos < 0) {
        newPos += N;
      }
      return timesThrown(N,M,L, newPos % N,count);
    }
    return timesThrown(N,M,L, (P+1) % N,count);
    */
    return 1;
  }
public:

  int timesThrown(int N, int M, int L) {
    players.resize(N,0);
    if (M <= 1) {
      return 0;
    }
    return timesThrown(N,M,L,0,0);
  }

};
