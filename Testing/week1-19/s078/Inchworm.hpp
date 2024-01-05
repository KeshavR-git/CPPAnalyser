#include <iostream>
using namespace std;
int XX_MARKER_XX;
 
 
class Inchworm
{
	public:
  int reference(int i, int j) // i is resting and j is the leaf here
  {
    if(i == 0) { // if rest = 0 return leaf
      return j;
    }else if(j == 0 or i == j) { // if leaf = 0 or leaf = rest, return rest
      return i;
    }else if(i < j) {
      return reference(j % i, i);
    }else if(i > j) {
      return reference(i % j, j);
    }
    return -1;
  }

  int lunchtime(int branch, int rest, int leaf) {
    return 1 + branch/(rest*leaf/reference(rest, leaf));
  }

};


  // int main(){
  //   cout << lunchtime(11,2,4) << endl;

  //   cout << lunchtime(12,6,4) << endl;

  //   cout << lunchtime(20,3,7) << endl;

  //   cout << lunchtime(21,7,3) << endl;
  // }