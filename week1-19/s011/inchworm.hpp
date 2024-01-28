#include <iostream>
// #include <cmath>
using namespace std;
 
// Lowest common multiple function
int LCM(int a, int b){
	int lcm=1;
	if (b<a)
		swap(a, b);
	while (!(lcm%a==0 && lcm%b==0)){
		lcm++;
	}
	return lcm;
}


class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {

    // your code for the problem
    return branch/LCM(rest, leaf)+1;  // return your result
  }
};

