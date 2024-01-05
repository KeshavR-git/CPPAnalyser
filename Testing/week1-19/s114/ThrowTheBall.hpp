#include <iostream>
using namespace std;
int XX_MARKER_XX;


class ThrowTheBall {
public:
  int timesThrown(int N, int M, int L) {
    int players [N];
    for (int i = 0; i < N; i++) {
      players[i] = 0;
    }

    int ballPos = 0;
    int numPasses = 0;

    while (players[ballPos] < M) {
      players[ballPos]++;

      // for (int i = 0; i < N; i++) {
      //   cout << players[i];
      // }
      // cout << " np: " << numPasses << " bp: " << ballPos+1 << endl;

      if (players[ballPos] == M) {
        break;
      } else {
        numPasses++;
      }

      if (players[ballPos] % 2 == 0) {
        ballPos += L;
      } else {
        ballPos -= L;
      }
      while (ballPos >= N || ballPos < 0) {
        if (ballPos >= N) {
          ballPos = ballPos - N;
        }
        if (ballPos < 0) {
          ballPos = ballPos + N;
        }
      }
    }

    return numPasses;
  }
};

// N = group size
// M = max received
// L = distance of pass
