using namespace std;
#include <iostream>
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int res=1;
    int big, small;
    if (leaf>=rest){
    	big=leaf;
    	small=rest;
    }else{
    	big=rest;
    	small=leaf;
    }
    int current=big;
    while (current<=branch){
    	if (current%small==0){
    		res++;
    	}
    	current+=big;
    }
    return res;  // return your result
  }
};