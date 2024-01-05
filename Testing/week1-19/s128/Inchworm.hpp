#include <iostream>
using namespace std;
int XX_MARKER_XX;
 

class Inchworm
{

  public: 
  int lunchtime(int branch, int rest, int leaf)
  {
  	 // your code for the problem.
  	int count=0;
  	int mark=0;

  	while(mark<=branch){
  		if(mark%leaf==0){
  			count++;
  		}
  		mark=mark+rest;
  	}
   
    return count;  // return your result
  }
};


