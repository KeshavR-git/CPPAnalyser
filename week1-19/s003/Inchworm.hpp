#include <iostream> 
using namespace std;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int res = 1; 

  	for(int i = rest; i <= branch; i += rest) {
  		
  		if(i % leaf == 0) {
  			res++; 
  		}
  	}
    return res;  
  }
};