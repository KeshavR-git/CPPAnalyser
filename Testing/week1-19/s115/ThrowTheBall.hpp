#include <iostream>
#include <vector>
using namespace std;
int XX_MARKER_XX;

class ThrowTheBall {
public:
	int timesThrown(int N, int M, int L){
		int i = 0;
		int res = 0;
          vector<int> player;
          player.push_back(1);
          for (int i = 0; i < N;i++){
          	player.push_back(0);
          }

          while (player.at(i) != M){
               if (player.at(i)%2 == 0){
                 i = (i + L)%N;
                 
               } else {
               	    i = i - L;
               	    if (i < 0){
                        i = i+N;
               	    }
               }
                player.at(i) = player.at(i) + 1;
               res++;
          }
          return res;
	}
};