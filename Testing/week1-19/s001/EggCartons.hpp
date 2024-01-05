#include <iostream>
using namespace std;
int XX_MARKER_XX;
 
 
class EggCartons
{
  public:
  int minCartons(int n)
  {
    int ans = n/8;
    int ans2= n/6;
    int res = -1;
    int temp = 0;
    int temp2 = 0;
    int res2 = -1;
    int final = -1;
    if ((n%2==1)||(n<6)){
      return res;
    }
    if (n%8==0){
      res = n/8;
      return res;
    }
    else for(int i = 0; i < n ; i++){
      ans = n - (i*8);
      ans2 = n - (1*6);
      if (ans<6){
        res = -1;
      }
      if(ans2<8){
        res2=-1;
      }
      if (ans%6==0){
        res = ans/6 + i;
        if(temp==0){
          temp = res;
        }
      }
      if(ans%8==0){
        res2= ans/8 +i;
        if(temp2==0){
          temp2=res2;
        }
      }
      res = temp;
      res2 = temp2;
    }
    if (res2>res){
      final = res;

    }
    if(res2<res){
      final = res2;
    }
    return final;
  }
