#include <cstdlib>
#include <iostream>
using namespace std;
 
 
class Inchworm
{
	public:
	int lunchtime(int branch, int rest, int leaf)
  {
  	int curr = 0;
  	int res = 0;

	while (curr <= branch) {
  		if (curr%leaf == 0) {
  			res++;
  		}
  		curr = curr + rest;
  	}

    return res;  // return your result
  }
};