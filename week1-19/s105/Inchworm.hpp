#include <iostream>
using namespace std;



class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int res = 0;

    int stops = branch/rest;

    for(int i = 0; i<=stops; i++){

      if((rest*i)%leaf == 0){
        res++;
      }

    }
    // your code for the problem
    return res;  // return your result
  }
};
