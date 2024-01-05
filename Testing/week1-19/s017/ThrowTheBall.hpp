#include <iostream>
using namespace std; 
int XX_MARKER_XX;

 
class ThrowTheBall {
  	public:
  	int timesThrown(int N, int M, int L) {
  		int counter = 0;
      int posCounter[50];

      int ballPos = 0;


      for (int i = 0; i < 50; i++) {

          posCounter[i] = 0;

      }
      posCounter[0] = 1;


      while (posCounter[ballPos] < M) {
        counter++;
        if (posCounter[ballPos] % 2 == 1) {
            ballPos = (ballPos - L);
            if (ballPos < 0) {
                ballPos += N;
            }
        }
        else {
            ballPos = (ballPos + L)%N;
        }
        posCounter[ballPos]++;
      }


  		
		  return counter;
  	}
};