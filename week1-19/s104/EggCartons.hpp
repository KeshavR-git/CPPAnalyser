#include <iostream>
using namespace std;

 
class EggCartons
{
  public:
  int minCartons(int n)
  {
  	int eggCartonsNum = 0;		// total egg cartons required
    // for odd number of eggs
    if ( n%2==1 ){
      return -1;
    }
    // for n too small
    else if ( n<12 && n!=6 && n!=8){
      return -1;
    }
    // otherwise
    else {
      while ( n>0 )
      {
        if ( n%8 == 0 ){
          n -= 8;
          eggCartonsNum++;
        }
        else {
          n -= 6;
          eggCartonsNum++;
        }
      }
      return eggCartonsNum;
    }

  }
};
