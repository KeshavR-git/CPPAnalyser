#include <iostream>
using namespace std;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
  	int res = 0;
  	if (rest > branch){
      res++;
  		return res;
  	}
  	for (int current  = 0 ; current <= branch;current+=rest){
          	// for (int i = 1; i*leaf <= branch;i++){
               if (current%leaf == 0){
                   res++;
               }    
           }
    // your code for the problem
    return res;  // return your result
  }
};
