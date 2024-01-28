using namespace std;
#include <iostream>
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    // your code for the problem
   	int res = 0;
   	int pos = 0;

   	if(leaf > rest){
   		int tmp = rest;
   		rest = leaf;
   		leaf = tmp;
   	}

   	for(int i = 0; i <= branch; i += rest){
   		if(i % leaf == 0){
   			res++;
   		}
	}
    return res;  // return your result
  }
};