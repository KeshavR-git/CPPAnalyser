#include <cstdlib>
#include <iostream>
using namespace std;

class EggCartons
{
  public:
  int minCartons(int n)
  {

  	int lim1 = n/6 + 1, lim2 = n/8 + 1, min = 100, curr;

  	for (int i = 0; i < lim1; i++) {
  		for (int j = 0; j < lim2; j++) {
  			curr = 6*i + 8*j;
  			if ((curr == n) && ((i + j) < min)) {
  				min = i + j;
  			}
  		}
  	}

  	if (min < 100) {
  		return min;
  	}

    return -1;  // return your result
  }
	
};