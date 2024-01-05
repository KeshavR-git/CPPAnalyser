#include <iostream>
using namespace std;
int XX_MARKER_XX;


class ThrowTheBall{
  public:
  int timesThrown(int N, int M, int L){
      int arr[N];
      for (int i=0;i<N;i++)
        arr[i]=0;
      int res=0;
      if (M<=1)
        return res;
      int pos=0;
      arr[pos]=1;
      while (arr[pos]<M){
        if (arr[pos]%2==1){
          pos=pos-L;
          if (pos<0)
            pos=pos+N;
        }else {
           pos=pos+L;
           if (pos>N-1)
             pos=pos-N;
        }
        arr[pos]=arr[pos]+1;
        res=res+1;
      }
      return res;
  }
};
