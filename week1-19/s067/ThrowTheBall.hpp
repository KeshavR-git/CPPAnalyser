#include <iostream>
using namespace std;
#pragma once
class ThrowTheBall{

  public:

  int timesThrown(int N, int M, int L){

   if(N <= 1 || M <= 1 || L <= 1){
      return 0;
   }

   else{

      int caught = 0;
      int arr[N];
      arr[0] = 1;
/*
      for(int i = 0; i < N-1; i=i+L){
        caught++;
        arr[i] ++;
      }
  */
      int i = 0;
      while (arr[0] <= M){
         if (i < N){
            arr[i]++;
            i += L;
            caught++;
         }
         else{
            i = i - (N);
         }  
      }    
      return caught-1;
   }
  }
};