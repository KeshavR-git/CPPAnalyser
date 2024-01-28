#include <iostream>


#ifndef THROWTHEBALL_H
#define THROWTHEBALL_H

class ThrowTheBall{
public:
  int mod(int a, int base){
    return ((a % base) + base) % base;
  };

  int timesThrown(int N, int M, int L){

    int count = 0;

    int timesCaught[N];

    for(int j = 0; j<N;j++){
      timesCaught[j] = 0;
    }

    int i = 0;

    while(true){

      timesCaught[i]++;

      if(timesCaught[i] == M){
        return count;
      }

      count++;

      if(timesCaught[i]%2 == 0){
        i = mod((i-L),N);
      }else{
        i = mod((i+L),N);
      }
    }

  }
};
#endif
