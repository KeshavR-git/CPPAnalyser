using namespace std;
#ifndef THROWTHEBALL_H
#define THROWTHEBALL_H


class ThrowTheBall
{
  public:
  int timesThrown(int N, int M, int L){
    int* playerArray;
    playerArray = new int[N];

    for (int i = 0; i < N; ++i)
    {
      playerArray[i] = 0;
    }
    int pass_count = -1;
    int max_passes = 0;

    int j = 0;

    while (max_passes < M){

      (playerArray[j])++;
      
      if (playerArray[j] > max_passes){
        max_passes = playerArray[j];
      }

      if (playerArray[j] % 2 == 1){
        j = (j - L);
        if (j < 0){
          j = j + N;
        }
      }
      else{
        j = (j + L) % N;
      }

      pass_count++;

    }

    cout << pass_count;
    delete[] playerArray;
    return pass_count;
  } 
};

#endif