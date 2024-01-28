#include <iostream>
using namespace std;



class Inchworm{
  public:
  int lunchtime(int branch, int rest, int leaf){
      int res=0;
      for (int i=0;i<=branch;i=i+rest){
        if (i%leaf==0)
            res=res+1;
      }
      return res;
  }
};
