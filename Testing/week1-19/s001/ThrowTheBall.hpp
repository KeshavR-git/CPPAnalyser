#include <iostream>
using namespace std;
int XX_MARKER_XX;
 
 
class ThrowTheBall
{
  public:
  int timesThrown(int N, int M, int L)
  {
    int array[N];
    for (int i=0; i < N; i++){
      array[i]=0;
    }
    int i = 0;
    int count = 0;
    while(true){
      array[i]++;
      if(array[i]==M){
        return count;
      }
      if(array[i]%2==0){
        i=i-L;
        if(i<0){
          i=i+N;
        }
        count++;
      }
      else{
        i=i+L;
        if(i>=N){
          i=i-N;
        }
        count++;
      }
    }
  }
};
   
